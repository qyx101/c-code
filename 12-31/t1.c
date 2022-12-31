// 判断机器大小端

#include <stdio.h>
int test(char* pa)
{
	if (*pa == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{	
	// 小端 01 00 00 00
	// 大端 00 00 00 01
	int a = 1;
	int res = test(&a);
	if (res)
	{
		printf("小端机器\n");
	}
	else
	{
		printf("大端机器\n");
	}
}