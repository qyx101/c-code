#include "heap.h"

int main()
{
	HP heap;
	HPInit(&heap);
	HPPush(&heap, 1);
	HPPush(&heap, 2);
	HPPush(&heap, 3);
	HPPush(&heap, 4);
	HPPush(&heap, 5);
	while (!HeapEmpty(&heap))
	{
		printf("%d ", HeapTop(&heap));
		HPPop(&heap);
	}
}