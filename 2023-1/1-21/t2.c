#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* des, const char* source)
{
	assert(des && source);
	char* ret = des;
	while (*des++ = *source++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[10] = { 0 };
	char arr2[] = "abcdef";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}