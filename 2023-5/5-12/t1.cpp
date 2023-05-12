#include <iostream>
using namespace std;
//
//class A
//{
//public:
//	explicit A(int val)
//		:_val(val)
//	{
//		cout << "construct" << endl;
//	}
//	A(const A& ref)
//		:_val(ref._val)
//	{
//		cout << "copy" << endl;
//	}
//private:
//	int _val;
//};
//
//int main()
//{
//	//A a2 = 2;
//	const A& ref = 2;
//}
class A
{
public:
    A() { ++_scount; }
    A(const A& t) { ++_scount; }
    ~A() { --_scount; }
    // 3. 静态成员函数, 没有this指针, 指定类域可以访问
    static int GetACount() { return _scount; }
private:
    // 属于类对象
    int _val1;
    int _val2;
    // 1. 属于类共享
    static int _scount;
};
// 2. 需要在类外定义
int A::_scount = 0;

int main()
{
 /*  cout << A::GetACount() << endl;
    A a1, a2;
    A a3(a1);*/
    //A a1;
    cout << A::GetACount() << endl;
  
}
