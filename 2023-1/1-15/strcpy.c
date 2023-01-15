// strcpy 字符串拷贝 模拟

#include <stdio.h>
#include <assert.h>

char* Strcpy(char* des, const char* source)
{
	char* res = des;
	assert(des && source != NULL);
	while (*des++ = *source++)
	{
		;
	}
	return res;

}
int main()
{
	char arr1[10] = " ";
	char arr2[] = "abcdef";
	Strcpy(arr1, arr2);
	printf("%s\n", arr1);
}