// 使用指针打印数组内容
#include <stdio.h>
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pa = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *pa);
		pa++;
	}
}