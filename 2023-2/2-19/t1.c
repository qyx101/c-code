//#include <stdio.h>
//int test(int x, int y)
//{
//	;
//}
//int main()
//{
//	int(*ptr)(int, int) = test;
//}
//#include <stdio.h>
//void test1()
//{
//	;
//}
//void test2()
//{
//	;
//}
//void test3()
//{
//	;
//}
//int main()
//{
//	void(*ptr[3])() = { test1,test2,test3 };
//}
//#include <stdio.h>
//int test(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*ptr)(int, int) = test;
//	int ret = (*ptr)(1, 2);
//	printf("%d\n", ret);
//}