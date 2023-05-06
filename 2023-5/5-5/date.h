#pragma once
#include <iostream>
using namespace std;

class Date
{
public:
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	// 构造
	Date(int year = 1, int month = 1, int day = 1);
	// 拷贝构造
	Date(const Date& d);
	// 获取某年某月的天数
	int GetMonthDay(int year, int month);

	bool operator==(const Date& d);
	bool operator<(const Date& d);
	bool operator <= (const Date& d);
	bool operator>(const Date& d);
	bool operator >= (const Date& d);
	bool operator!=(const Date& d);
	// 日期-天数
	//Date operator-(int day);
	// 日期-=天数
	Date& operator-=(int day);
	Date operator+(int day);
	Date& operator+=(int day);
	// 前置
	Date operator++(); 
	// 后置
	Date operator++(int);
	// 前置
	Date operator--();
	// 后置
	Date operator--(int);
private:
	int _year;
	int _month;
	int _day;
};

