#include "stack.h"

void STInit(stack* pst)
{
	assert(pst);
	pst->st = (STDataType*)malloc(sizeof(STDataType) * 3);
	if (pst->st == NULL)
	{
		perror("STInit::malloc");
		return;
	}
	pst->capacity = 3;
	pst->top = 0;
}
void STDestroy(stack* pst)
{
	assert(pst);
	free(pst->st);
	pst->st = NULL;
	pst->capacity = 0;
	pst->top = 0;
}
void STPush(stack* pst, STDataType data)
{
	assert(pst);
	// 检查容量
	if (pst->capacity == pst->top)
	{
		STDataType* tmp = (STDataType*)realloc(pst->st, sizeof(STDataType) * pst->capacity * 2);
		if (NULL == tmp)
		{
			perror("realloc");
			return;
		}
		pst->st = tmp;
		pst->capacity *= 2;
	}
	pst->st[pst->top] = data;
	pst->top++;
}
bool isEmpty(stack* pst)
{
	assert(pst);
	return pst->top == 0;
}
void STPop(stack* pst)
{
	assert(pst);
	// 检查是否为空
	assert(!isEmpty(pst));
	pst->top--;
}
// 计算栈中元素个数
int STSize(stack* pst)
{
	assert(pst);
	return pst->top;
}
// 获取栈顶元素
STDataType STTop(stack* pst)
{
	assert(pst);
	assert(!isEmpty(pst));
	return pst->st[pst->top - 1];
}


