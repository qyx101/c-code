// 打印3的倍数的数
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
}