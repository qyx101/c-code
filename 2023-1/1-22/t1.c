#include <stdio.h>
void* my_memcpy(void* des, void* src, size_t num)
{
	char* ret = des;
	while (num--)
	{
		*(char*)des = *(char*)src;
		des = (char*)des + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr1[10] = { 0 };
	my_memcpy(arr1, arr2+2, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}