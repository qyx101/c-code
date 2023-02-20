// 使用冒泡排序，排序任意类型数组
#include <string.h>
#include <stdio.h>
struct Stu
{
	char name[10];
	int age;
};

// 比较整形
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_by_name(const void* e1,const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void swap(char* buf1, char* buf2, int width)
{
	while (width--)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ((*cmp)( (char*)base+(j*width), (char*)base+((j+1)*width)) > 0)
			{
				swap((char*)base + (j * width), (char*)base + ((j + 1) * width), width);
			}
		}
	}
}

 //排序整形数组
void sort_int()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}

// 排序结构体数组
void sort_struct()
{
	struct Stu t1[5] = { {"c",5 }, { "a",4 }, { "b",3 }, { "e",2 }, { "d",1 } };
	int sz = sizeof(t1) / sizeof(t1[0]);
	bubble_sort(t1, sz, sizeof(t1[0]), cmp_by_name); // 以名字排序
	//bubble_sort(t1, sz, sizeof(t1[0]), cmp_by_age);

}

int main()
{
	//sort_int();
	sort_struct();
}