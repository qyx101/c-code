//////#include <iostream>
//////using namespace std;
//////class Date
//////{
//////public:
//////	Date(int year = 1, int month = 1, int day = 1)
//////	{
//////		// 函数体内赋值
//////		_year = year;
//////		_month = month;
//////		_day = day;
//////	}
//////	void Print() const
//////	{
//////		cout << _year << "-" << _month << "-" << _day << endl;
//////	}
//////private:
//////	int _year;
//////	int _month;
//////	int _day;
//////};
//////int main()
//////{
//////	Date d1(1,1,1);
//////	d1.Print(); 
//////}
////// 
//////
////////class cl1
////////{
////////public:
////////	cl1(int val = 1, int ref = 1)
////////		:_val(val)
////////		,_ref(ref)
////////	{
////////
////////	}
////////private:
////////	const int _val = 1;
////////	int& _ref;
////////};
////////int main()
////////{
////////	cl1 obj1(2,2);
////////}
//////
////#include <iostream>
////using namespace std;
////class testcl
////{
////public:
////	testcl(int val)
////	{
////		_val = val;
////	}
////private:
////	int _val;
////};
////
////class cl1
////{
////public:
////	cl1(int val = 1, int ref = 1)
////		// 初始化列表
////		:_val(val)
////		,_ref(ref)
////		,t1(3)
////	{
////	}
////private:
////	const int _val = 1;
////	int& _ref;
////	testcl t1;
////};
////int main()
////{
////	cl1 obj1(2, 2);
////}
//#include <iostream>
//using namespace std;
//
//class Stack
//{
//public:
//	Stack(int capacity = 4)
//		:_dys((int*)malloc(sizeof(int) * capacity))
//		,_capacity(capacity)
//	{
//		if (nullptr == _dys)
//		{
//			perror("malloc fail");
//			return;
//		}
//	}
//private:
//	int _capacity;
//	int* _dys;
//	int _top;
//};
//
//int main()
//{
//	Stack st1;
//}