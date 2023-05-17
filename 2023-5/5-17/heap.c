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
void HeapPush(HP* php, HPDataType date)
{
	assert(php);
	if (php->size == php->capcacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->capcacity * sizeof(HPDataType) * 2);
		if (NULL == tmp)
		{
			perror("realloc fail");
			return;
		}
		php->dys = tmp;
		php->capcacity *= 2;
	}
	php->dys[php->size] = date;
	php->size++;
	AdjustUp(php->dys, php->size - 1);
}