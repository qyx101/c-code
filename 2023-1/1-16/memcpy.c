 /
 // 模拟 memcpy

#include <stdio.h>
void* my_memcpy(void* des, void* src, size_t n)
{
	char* res = des;
	while (n--)
	{
		*(char*)des = * (char*)src;
		des = (char*)des + 1;
		src = (char*)src + 1;
	}
	return des;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1+2, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
	
}