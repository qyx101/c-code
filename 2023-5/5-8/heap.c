#include "heap.h"

void HPInit(HP* php)
{
	assert(php);
	HPDataType* tmp = (HPDataType*)malloc(sizeof(HPDataType) * 4);
	if (NULL == tmp)
	{
		perror("HPInit::malloc fail");
		return;
	}
	php->dys = tmp;
	php->capacity = 4;
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
	while (child)
	{
		if (&dys[child] > &dys[parent])
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
void AjustDown(HPDataType* dys, int parent, int sz)
{
	int child = parent * 2 + 1;
	while (child < sz)
	{
		if (child + 1 < sz && dys[child] < dys[child + 1])
		{
			child++;
		}

		if (dys[parent] < dys[child])
		{
			Swap(&dys[parent], &dys[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HPPush(HP* php, HPDataType data)
{
	assert(php);
	if (php->capacity == php->size)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->dys, sizeof(HPDataType) * php->capacity * 2);
		if (NULL == tmp)
		{
			perror("HPPush::realloc fail");
			return;
		}
		php->dys = tmp;
		php->capacity *= 2;
	}
	php->dys[php->size] = data;
	php->size++;
	AdjustUp(php->dys, php->size - 1);
}

void HPPop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));
	Swap(&php->dys[0], &php->dys[php->size - 1]);
	php->size--;
	AjustDown(php->dys, 0, php->size);
}

HPDataType HeapTop(HP* php)
{
	assert(php);
	return php->dys[0];
}

bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}

int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}