#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char arr1[] = "abc";
	char arr2[] = "abc";
	int res = my_strcmp(arr1, arr2);
	printf("%d\n", res);
}