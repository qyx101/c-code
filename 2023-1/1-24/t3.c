#include <stdio.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	return * (int*)e1 - * (int*)e2;
}

// 以名字排序
int cmp_struct_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
// 以年龄排序
int cmp_struct_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void swap(char* s1, char* s2, size_t width)
{
	size_t i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
		s1++;
		s2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp( (char*)base + (j * width), (char*)base + (j+1)*width ) > 0)
			{
				swap((char*)base + (j * width), (char*)base + (j + 1) * width, width);
			}
		}
	}
}

// 排序整形
void sort_int()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

// 排序结构体

void sort_struct()
{
	struct Stu s[5] = { {"b",25},{"e",20},{"a",18},{"c",30},{"d",12} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_struct_name);
	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_age);

}

int main()
{

	//sort_int();
	sort_struct();

}