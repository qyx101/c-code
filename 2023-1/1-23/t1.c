// 使用qsort, 排序整形

#include <stdlib.h>
#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE

// 比较函数
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr2[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
  
	qsort(arr2, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}