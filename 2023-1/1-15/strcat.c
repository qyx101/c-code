// 追加字符串
// 模拟实现 strcat

#include <stdio.h>
#include <assert.h>

char* Strcat(char* des, const char* source)
{
	char* res = des;
	assert(des && source);
	while (*des)
	{
		des++;
	}

	while (*des++ = *source++)
	{
		;
	}
	return res;

}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	Strcat(arr1, arr2);
	printf("%s\n", arr1);
}