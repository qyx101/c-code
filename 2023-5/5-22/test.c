//#include "heap.h"
//
//void heapsort(int* arr, int n)
//{
//
//	HP heap;
//	HeapInit(&heap);
//	for (int i = 0; i < n; i++)
//	{
//		HeapPush(&heap, arr[i]);
//	}
//	for (int a = 0; a < n; a++)
//	{
//		arr[a] = HeapTop(&heap);
//		HeapPop(&heap);
//	}
//
//}
//int main()
//{
//	/*HP heap;
//	HeapInit(&heap);
//	HeapPush(&heap, 1);
//	HeapPush(&heap, 2);
//	HeapPush(&heap, 3);
//	HeapPush(&heap, 4);
//	HeapPush(&heap, 5);
//	while (!isEmpty(&heap))
//	{
//		printf("%d ", HeapTop(&heap));
//		HeapPop(&heap);
//	}*/
//	int a[] = { 7,8,3,5,1,9,5,4 };
//	heapsort(a, sizeof(a) / sizeof(int));
//}

#include "heap.h"

int main()
{
	HP heap;
	HeapInit(&heap);
	HeapPush(&heap, 1);
	HeapPush(&heap, 2);
	HeapPush(&heap, 3);
	HeapPush(&heap, 5);
	HeapPush(&heap, 6);
	while (!isEmpty(&heap))
	{
		printf("%d ", HeapTop(&heap));
		HeapPop(&heap);
	}
}