#include <stdio.h>

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

void cal(int(*pf)(int,int))
{	
	int x = 0;
	int y = 0;
	printf("输入两个数: ");
	scanf("%d %d", &x, &y);
	int res = pf(x, y);
	printf("%d\n", res);
}

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
		switch (n)
		{
		case 1:
			cal(add);
			break;

		case 2:
			cal(sub);
			break;

		case 3:
			cal(mul);
			break;

		case 4:
			cal(div);
			break;

		default:		
			break;

		}

	} while (n);
    return 0;
}