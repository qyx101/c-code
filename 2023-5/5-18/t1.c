#include "heap.h"

int main()
{
	HP heap;
	HeapInit(&heap);
	HeapPush(&heap, 1);
	HeapPush(&heap, 2);
	HeapPush(&heap, 3);
	HeapPush(&heap, 4);
	HeapPush(&heap, 5);
	while (!isEmpty(&heap))
	{
		printf("%d ", HeapTop(&heap));
		HeapPop(&heap);
	}
}