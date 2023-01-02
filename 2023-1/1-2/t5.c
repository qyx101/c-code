// BC116 小乐乐改数字

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>

int main()
{	
	// 12345
	int res = 0;
	int n = 0;
	scanf("%d", &n);
	int sign = 0;
	int a = 0;
	int i = 0;
	while (n)
	{	
		a = n % 10; // 5
		if (a % 2 == 0)
		{
			sign = 0;
		}
		else
		{
			sign = 1;
		}
		res += sign * pow(10, i);
		i++;
		n /= 10;
	}
	printf("%d\n", res);
	return 0;
}