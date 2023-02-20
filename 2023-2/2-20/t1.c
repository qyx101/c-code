//#define _CRT_SECURE_NO_DEPRECATE
//
//#pragma warning(disable : 4996)
//#include <stdio.h>
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
//void menu()
//{
//	printf("1.add	2.sub\n");
//	printf("3.mul	4.div\n");
//}
//
//int main()
//{
//	int(*ptr[5])(int, int) = { 0,add,sub,mul,div };
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do 
//	{
//		menu();
//		printf("输入: ");
//		scanf("%d", &input);
//		if (input > 4 || input <= 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("输入x: ");
//			scanf("%d", &x);
//			printf("输入y: ");
//			scanf("%d", &y);
//			ret = (ptr[input])(x, y);
//			printf("%d\n", ret);
//		}
//	} while (input);
//}
//#include <stdio.h>
//int main()
//{	
//	int arr[10] = { 0 }; // 整形数组
//	int(*pa)[10] = &arr; // 数组指针，指向数组的指针
//
//	int(*pf[10])(int, int); // 函数指针数组
//	int(*(*ppf)[10])(int,int)= &pf // 指向函数指针数组的地址	 
//}