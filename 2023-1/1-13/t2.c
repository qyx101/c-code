//qsort 排序整型

#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 }; // arr
	int sz = sizeof(arr) / sizeof(arr[0]); // 数组元素个数
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}