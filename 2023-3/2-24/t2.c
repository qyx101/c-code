#include "Stack.h"

int main()
{
	stack st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPop(&st);
	
}