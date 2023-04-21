#include <iostream>
using namespace std;

#define add(x,y) ((x+y)*10)

int main()
{
	for (int i = 0; i < 1000; i++)
	{
		cout << add(i, i + 1) << endl;
	}
}