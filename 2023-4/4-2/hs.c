#include "heapsort.h"
void Up_heapsort(int* arr, int sz)
{
	// 排升序, 建大堆 
	// 向上调整 - 建大堆
	for (int i = 1; i < 10; i++)
	{
		AdjustUp(arr, i);
	}
	 // 2. 根据大根堆，排升序 
	while (sz)
	{
		Swap(&arr[0], &arr[sz - 1]);
		sz--;
		AdjustDown(arr, sz, 0);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Down_heapsort(int* arr, int sz)
{
	// 向下调整 - 建大堆
	for (int i = (sz - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, sz, i);	
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 2, 1, 5, 7, 6, 8, 0, 9, 4, 3 };
	Up_heapsort(arr, 10);
	//Down_heapsort(arr, 10);
}