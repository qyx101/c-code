#include "SeqList.h"
void SLInit(DSL* s)
{
	SLDataType* tmp = (SLDataType*)malloc(sizeof(SLDataType) * INIT_CAPACITY);
	if (NULL == tmp)
	{
		perror("");
		return;
	}
	s->pc = tmp;
	s->capacity = INIT_CAPACITY;
	s->sz = 0;
}
void SLDestroy(DSL* s)
{
	free(s->pc);
	s->pc = NULL;
	s->sz = 0;
	s->capacity = 0;
}

void SLPushBack(DSL* s, SLDataType x)
{
	if (s->sz == s->capacity)
	{
		// 扩容
		SLDataType* tmp = (SLDataType*)realloc(s->pc,sizeof(SLDataType) * s->capacity * 2);
		if (NULL == tmp)
		{
			perror("");
			return;
		}
		s->pc = tmp;
		s->capacity *= 2;
	}
	s->pc[s->sz] = x;
	s->sz++;
}
void SLPopBack(DSL* ps)
{
	assert(ps->sz > 0);
	/*if (ps->sz == 0)
	{
		return;
	}*/
	ps->sz--;
}

void Print(DSL* s)
{
	for (int i = 0; i < s->sz; i++)
	{
		printf("%d ", s->pc[i]);
	}
	printf("\n");
}