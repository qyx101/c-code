#include "SeqList.h"
// 初始化
void SLInit(SL* ps)
{
	assert(ps);
	SLDataType* tmp = (SLDataType*)malloc(sizeof(SLDataType) * 5);
	if (NULL == tmp)
	{
		perror("SLInit::malloc");
		return;
	}
	ps->dys = tmp;
	ps->capacity = 5;
	ps->size = 0;
}
// 销毁
void SLDestroy(SL* ps)
{
	assert(ps);
	free(ps->dys);
	ps->dys = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
// 打印
void SLPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->dys[i]);
	}
	printf("\n");
}
// 检查容量
void CheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->dys, sizeof(SLDataType) * ps->capacity * 2);
		if (NULL == tmp)
		{
			perror("CheckCapacity::realloc");
			return;
		}
		ps->dys = tmp;
		ps->capacity *= 2;
	}
}
// 尾插
void SLPushBack(SL* ps, SLDataType data)
{
	assert(ps);
	CheckCapacity(ps);
	ps->dys[ps->size] = data;
	ps->size++;

	// 代码复用
	/*SLInsert(ps, ps->size, data);*/

}
// 尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	// 如果数据个数为0,不能再删除
	assert(ps->size);
	ps->size--;

	// 代码复用
	//SLErase(ps, ps->size - 1);
}
// 头插
void SLPushFront(SL* ps, SLDataType data)
{
	assert(ps);
	CheckCapacity(ps);
	int sz = ps->size;
	while (sz)
	{
		ps->dys[sz] = ps->dys[sz - 1];
		sz--;
	}
	ps->dys[0] = data;
	ps->size++;
}
// 头删
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->dys[begin - 1] = ps->dys[begin];
		begin++;
	}
	ps->size--;
}
// 查找
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->dys[i] == x)
		{
			return i;
		}
	}
	return -1;
}
// pos位置插入数据
void SLInsert(SL* ps, int pos, SLDataType data)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	CheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->dys[end + 1] = ps->dys[end];
		end--;
	}
	ps->dys[pos] = data;
	ps->size++;
}
// pos位置删除数据
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(ps->size);
	assert(pos >= 0 && pos < ps->size);
	int begin = pos;
	int end = ps->size - 1;
	while (begin < end)
	{
		ps->dys[begin] = ps->dys[begin + 1];
		begin++;
	}
	ps->size--;
}
