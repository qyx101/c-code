//#include <iostream>
//int main()
//{
//	int a = 0;
//	int& b = a;
//	int& c = b;
//
//	int x = 1;
//	c = x; // c = x是将x的值赋值给别名c，而不是更改引用的指向
//	printf("%d", c);
//	/*printf("%d %d\n", a, b);
//	printf("%p %p\n", &a, &b);*/
//}

#include <iostream>
using namespace std;

//// 现在形参x,y是实参的别名;
//void swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int x = 0;
//	int y = 1;
//	swap(x, y);
//	printf("%d %d\n", x, y);
//}

