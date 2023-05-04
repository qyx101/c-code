#include<iostream>
//using namespace std;
//
////bool less(const Date& x)
////{
////		if (_year < x._year)
////		{
////			return true;
////		}
////		else if (_year == x._year && _month < x._month)
////		{
////			return true;
////		}
////		else if (_year == x._year && _month == x._month && _day < x._day)
////		{
////			return true;
////		}
////
////		return false;
////}
//class Date
//{
//public:
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
//	Date operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		return *this;
//	}
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//		_year = d._year;
//		_month = d._month; 
//		_day = d._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////bool Compare(const Date& x1, const Date& x2)
////{
////	if (x1._year < x2._year)
////	{
////		return true;
////	} 
////	else if (x1._year == x2._year && x1._month < x2._month)
////	{
////		return true;
////	}
////	else if (x1._year == x2._year && x1._month == x2._month && x1._day < x2._day)
////	{
////		return true;
////	}
////	return false;
////}
////
////bool operator<(const Date& x1, const Date& x2)
////{
////	if (x1._year < x2._year)
////	{
////		return true;
////	}
////	else if (x1._year == x2._year && x1._month < x2._month)
////	{
////		return true;
////	}
////	else if (x1._year == x2._year && x1._month == x2._month && x1._day < x2._day)
////	{
////		return true;
////	}
////	return false;
////}
//
//
//int main()
//{
//	Date d1(1111, 1, 1);
//	Date d2(2222, 4, 2);
//	Date d3(3333, 3, 3);
//	d1 = d2 = d3;
//	//// 拷贝构造
//	//Date d3(d1);
//	//// 
//	//d2 = d3;
//
//	//cout << Compare(d1, d2) << endl;
//	/*cout << (d1 < d2) << endl;
//	cout << d1.operator<(d2) << endl;*/
//}