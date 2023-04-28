#include <iostream>
using namespace std;

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print() // 3. void Print(Date* this)
	{
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	}
private:
	int _year;     // 年   
	int _month;    // 月
	int _day;      // 日
};
int main()
{
	Date d1, d2;
	d1.Init(2022, 1, 11);
	d2.Init(2023, 4, 28);
	d1.Print();
	//d1.Print(&d1);
	d2.Print();
	//d2.print(&d2);
}