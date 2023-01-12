// cal 2

void menu()
{
	printf("**************************************\n");
	printf("************ 1.add 2.sub *************\n");
	printf("************ 3.mul 4.div *************\n");
	printf("************ 0.exit *************\n");
	printf("**************************************\n");
}

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}

#include <stdio.h>
int main()
{	
	int x = 0;
	int y = 0;
	int n = 0;
	int res = 0;
	do
	{
		menu();
		printf("输入: ");
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		else if(n > 0 && n < 5)
		{
			printf("输入两个数: ");
			scanf("%d %d", &x, &y);
			int (*pf[5])(int, int) = { NULL, &add, &sub,&mul,&div };
			res = pf[n](x, y);
			printf("%d\n", res);
		}
		else
		{
			printf("error\n");
		}
		
	} while (n);
}