// 追加字符串
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* des, const char* src)
{
	assert(des && src);
	char* ret = des;
	while (*des != '\0')
	{
		des++;
	}
	while (*des++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
}