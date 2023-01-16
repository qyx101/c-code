// 模拟实现 memmove

#include <stdio.h>
#include <assert.h>

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
void* my_memmove(void* des, void* src, size_t n)
{
	assert(des && src);
	char* res = des;
	if (des < src)
	{
		while (n--)
		{
			*(char*)des = *(char*)src;
			des = (char*)des + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (n--)
		{
			*((char*)des + n) = *((char*)src + n);
		}
	}
	return res;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = {0};
	//my_memcpy(arr1+2, arr1, 20);
	my_memmove(arr1 + 2, arr1, 20);
	return 0;
	
}