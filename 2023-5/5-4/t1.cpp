//#include <iostream>
//using namespace std;
//
//typedef int DataType;
//class Stack
//{
//public:
//	// 拷贝构造 - 深拷贝
//	/*Stack(const Stack& st)
//	{
//		_array = (int*)malloc(sizeof(int) * st._capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//
//		memcpy(_array, st._array, sizeof(int) * st._top);
//		_top = st._top;
//		_capacity = st._capacity;
//	}*/
//	// 构造函数
//	Stack()
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * 4);
//		if (NULL == _array)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//
//		_capacity = 4;
//		_top = 0;
//	}
//
//	// 析构函数
//	~Stack()
//	{
//		free(_array);
//		_capacity = 0;
//		_top = 0;
//	}
//
//private:
//	DataType* _array;
//	int _capacity;
//	int _top;
//};
//
//class MyQueue
//{
//	Stack pushst;
//	Stack popst;
//};
//
//int main()
//{
//	MyQueue q1;
//}


//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	// 构造
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// 拷贝构造
//	Date(Date& d)
//	{
//		cout << "copy" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	bool operator<(const Date& d)
//	{
//		if (_year < d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month < d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month == d._month && _day < d._day)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	//// 赋值运算符重载
//	//Date& operator=(const Date& d)
//	//{
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//	return *this;
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// 赋值运算符重载
//Date& operator=(const Date& d)
//{
//	_year = d._year;
//	_month = d._month;
//	_day = d._day;
//	return *this;
//}
//
//int main()
//{
//	Date d1(2025, 4, 25);
//	Date d2(2023, 5, 25);
//	Date d3;
//	d3 = d2 = d1;
//	//d1.operator=(d2);
//}

