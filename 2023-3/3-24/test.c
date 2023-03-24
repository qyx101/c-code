#include "stack.h"

void t1()
{
	stack st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	STPush(&st, 5);
	while (!isEmpty(&st))
	{
		printf("%d ", STTop(&st));
		STPop(&st);
	}
	STDestroy(&st);
}
int main()
{
	t1();
}