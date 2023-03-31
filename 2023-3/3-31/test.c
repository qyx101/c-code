#include "heap.h"
int main()
{
	HP heap;
	HPInit(&heap);
	HeapPush(&heap, 4);
	HeapPush(&heap, 15);
	HeapPush(&heap, 3);
	HeapPush(&heap, 10);
	HeapPush(&heap, 20);
	HeapPush(&heap, 2);
	while (!isEmpty(&heap))
	{
		printf("%d ", HPTop(&heap));
		HeapPop(&heap);
	}


}