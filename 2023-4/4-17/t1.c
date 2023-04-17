//#include <iostream>
//using namespace std;
//int main()
//{
//	// 自动识别类型
//	int a;
//	double b;
//	cin >> a >> b;
//	cout << a << endl;
//	cout << b << endl;
//}

#include <iostream>
using namespace std;

// 
void t1(int a = 0)
{
	cout << a << endl;
}

void t2(int a = 1, int b = 2, int c = 3)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl << endl;
}
void t3(int a, int b = 1, int c = 2)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl << endl;
}

//int main()
//{
//	t1(1);
//	t1();
//}

//int main()
//{
//	t2();
//	t2(10);
//	t2(10, 20);
//	t2(10, 20, 30);
//}

int main()
{
	t3(10);
	t3(10, 20, 30);

}
