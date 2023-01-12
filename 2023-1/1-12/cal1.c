// 运算器 1

#include <stdio.h>
int main()
{	
	int x = 0;
	int y = 0;
	int n = 0;
	int res = 0;
	do
	{
		menu;
		printf("输入: ");
		scanf("%d", &n);
		switch (n)
		{
			case 1:
				printf("输入两个数: ");
				scanf("%d %d", &x, &y);
				res = add(x, y);
				printf("%d\n", res);
				break;

			case 2:
				printf("输入两个数: ");
				scanf("%d %d", &x, &y);
				res = sub(x, y);
				printf("%d\n", res);
				break;

			case 3:
				printf("输入两个数: ");
				scanf("%d %d", &x, &y);
				res = mul(x, y);
				printf("%d\n", res);
				break;

			case 4:
				printf("输入两个数: ");
				scanf("%d %d", &x, &y);
				res = div(x, y);
				printf("%d\n", res);
				break;

			default:
				printf("退出\n");
				break;

		}

	} while (n);
}