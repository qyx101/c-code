#include "stack3.h"
int main()
{
	stack st;
	STInit(&st);
	STPush(&st,1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPush(&st, 5);
	while (!isEmpty(&st))
	{
		printf("%d ", RetTop(&st));
		STPop(&st);
	}
}