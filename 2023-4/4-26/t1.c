#include <stdio.h>
struct st1
{
	char ch1;
	int a;
	char ch2;
};
struct st2
{
	struct st1;
	char ch;
};
int main()
{
	printf("%d\n", sizeof(st2));
}