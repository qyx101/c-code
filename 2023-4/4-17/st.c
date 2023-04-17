#include "head.h"

void STInit(stack* ps, int capacity)
{
	assert(ps);
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * capacity);
	if (NULL == tmp)
	{
		perror("STInit::malloc fail");
		return;
	}
	ps->dys = tmp;
	ps->capacity = capacity;
	ps->top = 0;
}

int main()
{
	stack st;
	STInit(&st, 100);
}