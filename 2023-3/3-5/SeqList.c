#include "SeqList.h"
void SLInit(SL* s1)
{
	assert(s1);
	SLDataType* tmp = (SLDataType*)malloc(sizeof(SLDataType) * INIT_CAPACITY);
	if (NULL == tmp)
	{
		perror("Init::malloc");
		return;
	}
	else
	{
		s1->ps = tmp;
		s1->capacity = INIT_CAPACITY;
		s1->sz = 0;
	}
}

void SLDestroy(SL* s1)
{
	
	free(s1->ps);
	s1->ps = NULL;
	s1->capacity = 0;
	s1->sz = 0;
}

void SLShow(SL* s1)
{
	assert(s1);
	int i = 0;
	for (i = 0; i < s1->sz; i++)
	{
		printf("%d ", s1->ps[i]);
	}
	printf("\n");
}

void SLCheck(SL* s1)
{
	assert(s1);
	if (s1->sz == s1->capacity)
	{
		// 扩容
		SLDataType* tmp = (SLDataType*)realloc(s1->ps, sizeof(SLDataType) * s1->capacity * 2);
		if (NULL == tmp)
		{
			perror("SLCheck::realloc");
			return;
		}
		else
		{
			s1->ps = tmp;
			s1->capacity *= 2;
		}

	}
}

void SLPushBack(SL* s1, SLDataType x)
{
	assert(s1);
	// 检查容量
	SLCheck(s1);
	s1->ps[s1->sz] = x;
	s1->sz++;
}

void SLPopBack(SL* s1)
{
	assert(s1);
	assert(s1->sz > 0);
	s1->sz--;
}

void SLPushFront(SL* s1, SLDataType x)
{
	assert(s1);
	// 检查容量
	SLCheck(s1);
	int i = 0;
	for (i = s1->sz; i > 0; i--)
	{
		s1->ps[i] = s1->ps[i-1];
	}
	s1->ps[0] = x;
	s1->sz++;
}

void SLPopFront(SL* s1)
{
	assert(s1);
	assert(s1->sz > 0);
	int i = 0;
	for (i = 0; i < s1->sz-1; i++)
	{
		s1->ps[i] = s1->ps[i + 1];
	}
	s1->sz--;
}

void SLInsert(SL* s1, int pos, SLDataType x)
{
	assert(s1);
	assert(pos >= 0 && pos <= s1->sz);
	SLCheck(s1);
	int i = 0;
	for (i = s1->sz; i > pos; i--)
	{
		s1->ps[i] = s1->ps[i-1];
	}
	s1->ps[pos] = x;
	s1->sz++;
}

void SLErase(SL* s1, int pos)
{
	assert(s1);
	assert(pos >= 0 && pos < s1->sz);
	int i = 0;
	for (i = pos; i < s1->sz-1; i++)
	{
		s1->ps[i] = s1->ps[i + 1];
	}
	s1->sz--;
}
void SLFind(SL* s1,SLDataType x)
{
	assert(s1);
	int i = 0;
	for (i = 0; i < s1->sz; i++)
	{
		if (s1->ps[i] = x)
		{
			return i;
		}
	}
	return -1;
}