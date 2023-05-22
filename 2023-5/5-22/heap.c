#include "heap.h"

// 初始化与销毁
void HeapInit(HP* php)
{
	assert(php);
	HPDataType* tmp = (HPDataType*)malloc(sizeof(HPDataType) * 4);
	if (NULL == tmp)
	{
		perror("HeapInit::malloc fail");
		return;
	}
	php->dys = tmp;
	php->size = 0;
	php->capcacity = 4;
}
void HeapDestroy(HP* php)
{
	assert(php);
	free(php->dys);
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
// 向上调整算法---建大堆
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
// 向下调整算法---建大堆
void AdjustDown(HPDataType* dys, int parent, int sz)
{
	assert(dys);
	int child = parent * 2 + 1;
	while (child < sz)
	{
		// 假设左孩子大于右孩子
		if (child+1 > sz && dys[child + 1] > dys[child])
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
// 进堆
void HeapPush(HP* php, HPDataType data)
{
	assert(php);
	if (php->size == php->capcacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->dys, php->capcacity * sizeof(HPDataType) * 2);
		if (NULL == tmp)
		{
			perror("HeapPush::realloc fail");
			return;
		}
		php->dys = tmp;
		php->capcacity *= 2;
	}
	php->dys[php->size] = data;
	php->size++;
	AdjustUp(php->dys, php->size - 1);
}
// 删除堆顶数据
void HeapPop(HP* php)
{
	assert(php);
	assert(!isEmpty(php));
	Swap(&php->dys[0], &php->dys[php->size - 1]);
	php->size--;
	AdjustDown(php->dys, 0, php->size);
}
bool isEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(!isEmpty(php));
	return php->dys[0];
}