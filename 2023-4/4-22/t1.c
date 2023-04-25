#include <stdio.h>

int add(int x, int y)
{
	int d = 0;
	d = x + y;
	return d;
}
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = add(a, b);
	printf("%d\n", c);
	return 0;
}