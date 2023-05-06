#include "date.h"

// 构造
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
// 拷贝构造
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}

bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator<(const Date& x)
{
	if (_year < x._year)
	{
		return true;
	}
	else if (_year == x._year && _month < x._month)
	{
		return true;
	}
	else if (_year == x._year && _month == x._month && _day < x._day)
	{
		return true;
	}
	return false;
}

bool Date::operator<=(const Date& d)
{
	return (*this < d) || (*this == d);
}

bool Date::operator>(const Date& d)
{
	return !(*this < d);
}

bool Date::operator>=(const Date& x)
{
	return !(*this < x);
}

bool Date::operator!=(const Date& x)
{
	return !(*this == x);
}
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day < 0)
	{
		_month--;
		_day += GetMonthDay(_year, _month);
		if (_month == 1)
		{
			_year -= 1;
			_month = 12;
		}
	}
	return *this;
}
//日期-天数
//Date Date::operator-(int day);
int Date::GetMonthDay(int year, int month)
{
	static int daysArr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		return 29;
	}
	else
	{
		return daysArr[month];
	}
}
Date Date::operator+(int day)
{
	Date tmp = *this;
	tmp += day;
	return tmp;
}
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}

// 前置
Date Date::operator++()
{
	*this += 1;
	return *this;
}
// 后置
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}
// 前置
Date Date::operator--()
{
	*this -= 1;
	return *this;
}
// 后置
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}

int main()
{
	Date d1(2023, 5, 5);
	//Date d2(1111, 1, 1);
	//Date d3(d1);
	/*Date d2 = d1 + 100;*/
	d1 -= 100;
	d1.Print();
}