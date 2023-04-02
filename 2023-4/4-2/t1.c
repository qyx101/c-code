#include "heap.h"

// 测试初始化, 销毁
void t1()
{
	HP heap;
	HPInit(&heap);
	HPDestroy(&heap);
}
// 测试入堆, 向上调整
void t2()
{
	HP heap;
	HPInit(&heap);
	HeapPush(&heap, 3);
	HeapPush(&heap, 9);
	HeapPush(&heap, 14);
	HeapPush(&heap, 10);
	HeapPush(&heap, 21);
	HeapPush(&heap, 25);
}
void t3()
{
	HP heap;
	HPInit(&heap);
	HeapPush(&heap, 3);
	HeapPush(&heap, 9);
	HeapPush(&heap, 14);
	HeapPush(&heap, 10);
	HeapPush(&heap, 21);
	HeapPush(&heap, 25);
	HeapPush(&heap, 8);
	while (!isEmpty(&heap))
	{
		printf("%d ", HPTop(&heap));
		HeapPop(&heap);
	}
}
int main()
{
	//t1();
	//t2();
	t3();
}