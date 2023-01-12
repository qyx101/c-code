#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//
//int main()
//{
//	int (*pf[3])(int, int);		//函数指针数组
//	return 0;
//}

//void menu()
//{
//	printf("**************************************\n");
//	printf("************ 1.add 2.sub *************\n");
//	printf("************ 3.mul 4.div *************\n");
//	printf("************ 0.exit *************\n");
//	printf("**************************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//#include <stdio.h>
//int main()
//{	
//	int x = 0;
//	int y = 0;
//	int n = 0;
//	int res = 0;
//	do
//	{
//		menu();
//		printf("输入: ");
//		scanf("%d", &n);
//		if (n == 0)
//		{
//			break;
//		}
//		else if(n > 0 && n < 5)
//		{
//			printf("输入两个数: ");
//			scanf("%d %d", &x, &y);
//			int (*pf[5])(int, int) = { NULL, &add, &sub,&mul,&div };
//			res = pf[n](x, y);
//			printf("%d\n", res);
//		}
//		else
//		{
//			printf("error\n");
//		}
//		
//	} while (n);
//}

//#include <stdio.h>
//int main()
//{
//	int(*pf[5])(int, int); // 函数指针数组
//	int(*(*ppf)[5])(int, int) = &pf; //存储函数指针数组的指针
//}

// 运算器 1

//void menu()
//{
//	printf("**************************************\n");
//	printf("************ 1.add 2.sub *************\n");
//	printf("************ 3.mul 4.div *************\n");
//	printf("************ 0.exit *************\n");
//	printf("**************************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void cal(int(*pf)(int,int))
//{	
//	int x = 0;
//	int y = 0;
//	printf("输入两个数: ");
//	scanf("%d %d", &x, &y);
//	int res = pf(x, y);
//	printf("%d\n", res);
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int n = 0;
//	int res = 0;
//	do
//	{
//		menu();
//		printf("输入: ");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			cal(add);
//			break;
//
//		case 2:
//			cal(sub);
//			break;
//
//		case 3:
//			cal(mul);
//			break;
//
//		case 4:
//			cal(div);
//			break;
//
//		default:
//			
//			break;
//
//		}
//
//	} while (n);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	printf("%d\n", sizeof(pa));
//	return 0;
//}