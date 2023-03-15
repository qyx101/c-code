#pragma once
#include "SeqList.h"

void SLInit(SL* ps)
{
	assert(ps);
	// 首先, 动态开辟一块空间
	SLDataType* tmp = (SLDataType*)calloc(INIT_SZ, sizeof(SLDataType));
	if (NULL == tmp)
	{
		perror("SLInit::calloc");
		return;
	}
	ps->pc = tmp;
	ps->capacity = INIT_SZ; 
	ps->sz = 0;
}

void SLDestroy(SL* ps)
{
	assert(ps);
	free(ps->pc);
	ps->pc = NULL;
	ps->capacity = 0;
	ps->sz = 0;
}

// 显示
void SLPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->pc[i]);
	}
	printf("\n");
}
// 增容
void SLCheck(SL* ps)
{
	assert(ps);
	if (ps->sz == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->pc,sizeof(SLDataType) * ps->capacity * INC_SZ);
		if (NULL == tmp)
		{
			perror("SLCheck::realloc");
			return;
		}
		else
		{
			ps->pc = tmp;
			ps->capacity *= INC_SZ;
		}
	}
}

// 尾插数据
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	// 检查容量,不够增容
	SLCheck(ps);
	ps->pc[ps->sz] = x;
	ps->sz++;
}

// 尾删数据
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->sz);
	ps->sz--;
}
// 头插数据
void SLPushFront(SL* ps, SLDataType x) 
{
	assert(ps);
	SLCheck(ps);
	int i = 0;
	for (i = ps->sz; i > 0; i--)
	{
		ps->pc[i] = ps->pc[i-1];
	}
	ps->pc[0] = x;
	ps->sz++;
}
// 头删数据
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->sz);
	int i = 0;
	for (i = 0; i < ps->sz-1; i++)
	{
		ps->pc[i] = ps->pc[i + 1];
	}
	ps->sz--;
}

// 查找
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		if (ps->pc[i] == x)
		{
			return i;
		}
	}
	return -1;
}
// 在pos位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->sz);
	SLCheck(ps);
	// 移动数据
	int i = 0;
	for (i = ps->sz; i > pos; i--)
	{
		ps->pc[i] = ps->pc[i - 1];
	}
	ps->pc[pos] = x;
	ps->sz++;
}
// 删除pos位置的数据
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->sz);
	assert(ps->sz);
	int i = 0;
	for (i = pos; i < ps->sz; i++)
	{
		ps->pc[i] = ps->pc[i + 1];
	}
	ps->sz--;
}