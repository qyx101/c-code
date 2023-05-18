#include "heap.h"
void HeapInit(HP* php)
{
	assert(php);
	HPDataType* tmp = (HPDataType*)malloc(sizeof(HPDataType) * 4);
	if (NULL == tmp)
	{
		perror("malloc fail");
		return;
	}
	php->dys = tmp;
	php->capcacity = 4;
	php->size = 0;
}
void HeapDestroy(HP* php)
{
	assert(php);
	php->dys = NULL;
	php->capcacity = 0;
	php->size = 0;
} 
void Swap(HPDataType* buf1, HPDataType* buf2)
{
	int tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
}
void AdjustUp(HPDataType* dys, int child)
{
	assert(dys);
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (dys[child] > dys[parent])
		{
			Swap(&dys[child], &dys[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdjustDown(HPDataType* dys, int parent, int sz)
{
	assert(dys);
	int child = parent * 2 + 1;
	while (child < sz)
	{
		if (child + 1 < sz && dys[child + 1] > dys[child])
		{
			child++;
		}

		if (dys[child] > dys[parent])
		{
			Swap(&dys[child], &dys[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapPush(HP* php, HPDataType data)
{
	assert(php);
	if (php->size == php->capcacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->dys, php->capcacity * sizeof(HPDataType) * 2);
		if (NULL == tmp)
		{
			perror("realloc fail");
			return;
		}
		php->dys = tmp;
		php->capcacity *= 2;
	}
	php->dys[php->size] = data;
	php->size++;
	AdjustUp(php->dys, php->size - 1);
}
void HeapPop(HP* php)
{
	assert(php);
	Swap(&php->dys[0], &php->dys[php->size - 1]);
	php->size--;
	AdjustDown(php->dys, 0, php->size);
}
HPDataType HeapTop(HP* php)
{
	assert(php);
	return php->dys[0];
}
bool isEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}