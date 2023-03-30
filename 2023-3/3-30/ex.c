#include "Heap.h"
void HeapInit(Heap* pheap)
{
	assert(pheap);
	HpDataType* tmp = (HpDataType*)malloc(sizeof(HpDataType) * 5);
	if (NULL == tmp)
	{
		perror("HeapInit::malloc fail");
		return;
	}
	pheap->dys = tmp;
	pheap->capacity = 4;
	pheap->size = 0;
}
void Swap(HpDataType* buf1, HpDataType* buf2)
{
	HpDataType tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
}
void AdjustUp(HpDataType* dys, int child)
{
	int parent = (child - 1) / 2;
	/*while (pheap->dys[child] > pheap->dys[parent])
	{
		HpDataType tmp = pheap->dys[child];
		pheap->dys[child] = pheap->dys[parent];
		pheap->dys[parent] = tmp;
		child = parent;
		parent = (child - 1) / 2;
	}*/
	while (child > 0)
	{
		if (dys[child] > dys[parent])
		{
			Swap(&dys[parent], &dys[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void HeapPush(Heap* pheap, HpDataType data)
{
	assert(pheap);
	if (pheap->size == pheap->capacity)
	{
		HpDataType* tmp = (HpDataType*)realloc(pheap->dys, sizeof(HpDataType) * pheap->capacity * 2);
		if (NULL == tmp)
		{
			perror("HeapPush::realloc fail");
			return;
		}
		pheap->dys = tmp;
		pheap->capacity *= 2;
	}
	pheap->dys[pheap->size] = data;
	pheap->size++;
	// 向上调整
	AdjustUp(pheap->dys, pheap->size - 1);
}

// 向下调整
void AdjustDown(Heap* pheap)
{
	assert(pheap);

}
void HeapPop(Heap* pheap)
{
	assert(pheap);
	// 把堆顶与尾交换
	Swap(&pheap->dys[0], &pheap->dys[pheap->size-1]);
	pheap->size--;
}