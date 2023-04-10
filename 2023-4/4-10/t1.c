#include "stack.h"
int main()
{
	stack st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	while (!isSTEmpty(&st))
	{
		printf("%d ", STTop(&st));
		STPop(&st, 4);
	}
}