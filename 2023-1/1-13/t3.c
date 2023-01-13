#define _CRT_SECURE_NO_DEPRECATE

//#include <stdio.h>
//void reverse(char* str,int k)
//{
//	char* l = str;
//	char* r = l;
//	while (*r != '\0')
//	{
//		r++;
//	}
//	r--;
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		*str = *r;
//		*r = tmp;
//		str++;
//		r--;
//	}
//	printf("%s\n", str);
//
//}
//
//#include <stdio.h>
//void t1(char* str, int k)
//{
//	for (int i = 0; i < k; i++)
//	{
//		int j =  0;
//		for (j = 0; j <  3; j++)
//		{
//			
//				char tmp = str[j];
//				str[j] = str[j + 1];  
//				str[j + 1] = tmp;
//			
//		}
//	}
//	printf("%s\n", str);
//}
//int main()
//{
//	char str[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	t1(str, k);
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//// qsort 排序整型
//void t1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 }; // arr
//	int sz = sizeof(arr) / sizeof(arr[0]); // num of arr
//	qsort(arr, sz, 4, cmp_int);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//// qsort 排序结构体 ! 
//void t2()
//{
//	 
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	
//	return 0;
//}

//void sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
//{	
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//
//}
//



