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
// 1. 通过堆数据结构排序 --- 不好
// 弊端: 1. 首先需要一个堆, 2. 空间复杂度为O(N)
//void heapsort(int* array, int sz)
//{
//	HP heap;
//	HeapInit(&heap);
//	// 将数组元素依次入堆
//	for (int i = 0; i < sz; i++)
//	{
//		HeapPush(&heap, array[i]);
//	}
//	// 分别取出堆顶数据, 然后入数组
//	int i = 0;
//	while (!isEmpty(&heap))
//	{
//		array[i++] = HeapTop(&heap);
//		HeapPop(&heap);
//	}
//	HeapDestroy(&heap);
//}

// 2. 
void heapsort(int* array, int n)
{
	// 向上调整建堆
	/*for (int i = 1; i < n; i++)
	{
		AdjustUp(array, i);
	}*/
	// 向下调整建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(array, i, n);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&array[0], &array[end]);
		AdjustDown(array, 0, end);
		end--;
	}
}
int main()
{
	/*HP heap;
	HeapInit(&heap);
	HeapPush(&heap, 1);
	HeapPush(&heap, 2);
	HeapPush(&heap, 3);
	HeapPush(&heap, 5);
	HeapPush(&heap, 6);*/
	/*while (!isEmpty(&heap))
	{
		printf("%d ", HeapTop(&heap));
		HeapPop(&heap);
	}*/
	int a[] = { 7,8,3,6,1,9,2,4 };
	heapsort(a, sizeof(a) / sizeof(int));
  }