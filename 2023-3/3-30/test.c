#include "Heap.h"

void t1()
{
	// 测试向上调整，插入数据
	HP heap;
	HPInit(&heap);
	HeapPush(&heap, 11);
	HeapPush(&heap, 10);
	HeapPush(&heap, 5);
	HeapPush(&heap, 12);
	HeapPush(&heap, 9);
	HeapPush(&heap, 20);
}
void t2()
{
	HP heap;
	HPInit(&heap);
	HeapPush(&heap, 11);
	HeapPush(&heap, 10);
	HeapPush(&heap, 5);
	HeapPush(&heap, 12);
	HeapPush(&heap, 9);
	HeapPush(&heap, 20);
	while (!IsHPEmpty(&heap))
	{
		printf("%d ", HPTop(&heap));
		HeapPop(&heap);
	}
}

int main()
{
	//t1();
	t2();
}