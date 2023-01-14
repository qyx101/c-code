// 模拟实现 strcpy

#include <stdio.h>

 char* my_strcmp(char* s1, const char* s2)
{	
	 char* res = s1;
	while (*s1++ = *s2++)
	{
		;
	}
	return res;
}
int main()
{
	char arr1[20] = " ";
	char arr2[] = "test";
	my_strcmp(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}