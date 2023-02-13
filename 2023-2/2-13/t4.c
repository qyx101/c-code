// 打印100~200之间的素数
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int count = 0;
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int key = 0;
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				key = 1;
				break;
			}
		}
		if (0 == key)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d\n", count);
}