#include "heap.h"
void HPInit(HP* php)
{
	assert(php);
	HPDataType* tmp = (HPDataType*)malloc(sizeof(HPDataType) * 5);
	if (NULL == tmp)
	{
		perror("HPInit::malloc");
		return;
	}
	php->dys = tmp;
	php->capacity = 5;
	php->size = 0;
}
void HPDestroy(HP* php)
{
	assert(php);
	free(php->dys);
	php->dys = NULL;
	php->size = 0;
	php->capacity = 0;
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
void AdjustDown(HPDataType* dys, int sz, int parent)
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
	// 检查容量
	if (php->size == php->capacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->dys, sizeof(HPDataType) * php->capacity * 2);
		if (NULL == tmp)
		{
			perror("HeapPush::realloc");
			return;
		}
		php->dys = tmp;
		php->capacity *= 2;
	}
	// 入堆
	php->dys[php->size] = data;
	php->size++;
	// 向上调整
	AdjustUp(php->dys, php->size - 1);
}

void HeapPop(HP* php)
{
	assert(php);
	assert(!isEmpty(php));
	Swap(&php->dys[0], &php->dys[php->size - 1]);
	php->size--;
	// 向下调整
	AdjustDown(php->dys, php->size, 0);
}

HPDataType HPTop(HP* php)
{
	assert(php);
	assert(!isEmpty(php));
	return php->dys[0];
}
bool isEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
int HPSize(HP* php)
{
	assert(php);
	return php->size;
}
