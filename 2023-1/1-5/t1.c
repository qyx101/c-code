// 不使用变量，交换a,b的值

#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	return 0;
}