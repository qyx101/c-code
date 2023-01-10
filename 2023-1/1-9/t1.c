// 使用指针打印数组内容

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3 };
	int* pa = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *pa);
		pa++;
	}
}

