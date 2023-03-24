#include "Stack2.h"

// 初始化栈
void STInit(stack* ps)
{
	assert(ps);
	STDatatype* tmp = (STDatatype*)malloc(sizeof(STDatatype)*INIT_SZ);
	if (NULL == tmp)
	{
		perror("STInit::malloc");
		return;
	}
	ps->capacity = INIT_SZ;
	ps->st = tmp;
	ps->top = 0;
}
// 栈销毁
void STDestroy(stack* ps)
{
	assert(ps);
	free(ps->st);
	ps->st = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

// 进栈
void STPush(stack* ps, STDatatype data)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		STDatatype* tmp = (STDatatype*)realloc(ps->st, sizeof(STDatatype) * ps->capacity * INC_SZ);
		if (NULL == tmp)
		{
			perror("STPush::realloc");
			return;
		}
	}
	ps->st[ps->top] = data;
	ps->top++;
}
// 判断是否为空
bool isEmpty(stack* ps)
{
	assert(ps);
	return ps->top == 0;
}
// 出栈
void STPop(stack* ps)
{
	assert(ps);
	assert(!isEmpty(ps));
	ps->top--;
}
// 获取栈顶元素
STDatatype STTop(stack* ps)
{
	assert(ps);
	// 如果栈没有元素, 不能获取
	assert(!isEmpty(ps));
	return ps->st[ps->top-1];
}