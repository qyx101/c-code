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
void Swap(HPDataType* buf1, HPDataType* buf2)
{
	int tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
}
void AdjustUp(HPDataType* dys,int child)
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
void HeapPush(HP* php, HPDataType data)
{
	assert(php);
	// 检查容量
	if (php->size == php->capacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->dys, sizeof(HPDataType) * php->capacity * 2);
		if (NULL == tmp)
		{
			perror("HPInit::malloc");
			return;
		}
	}
	// 入堆
	php->dys[php->size] = data;
	php->size++;
	// 向上调整
	AdjustUp(php->dys, php->size - 1);
}

void AjustDown(HPDataType* dys, int parent, int size)
{
	assert(dys);
	int child = parent * 2 + 1;
	while (child < size)
	{	
		if (child + 1 < size && dys[child+1] > dys[child])
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
void HeapPop(HP* php)
{
	assert(php);
	assert(!isEmpty(php));
	// 将堆顶数据与堆尾交换
	Swap(&php->dys[0], &php->dys[php->size - 1]);
	php->size--;
	// 向下调整
	AjustDown(php->dys, 0, php->size);
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