
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
void Up_heapsort(int* arr, int n)
{
	// 向上调整 - 用建堆排序 
	int i = 0;
	for (i = 1; i < n; i++)
	{
		AdjustUp(arr, i);
	}
	while (n)
	{
		Swap(&arr[0], &arr[n-1]);
		AdjustDown(arr, 0, n-1);
		n--;
	}
}
void Down_heapsort(int* arr, int n)
{
	// 向下调整 - 建堆排序 
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, i, n);
	}
}
int main()
{
	//t1();
	//t2();
	int arr[10] = { 2, 1, 5, 7, 6, 8, 0, 9, 4, 3 }; // 对数组排序
	//Up_heapsort(arr, 10);
	Down_heapsort(arr, 10);
}