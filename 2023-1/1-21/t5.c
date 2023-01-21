#include <stdio.h>
#include <assert.h>
char* my_strstr(char* str1, char* str2)
{
	char* s1 = str1;
	char* s2 = str2;
	char* pc = str1;

	while (*pc)
	{	
		s1 = pc;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return pc;
		}
		pc++;
	}
	return NULL;

}
int main()
{
	char arr1[] = "abbcdef";
	char arr2[] = "def";
	char* res = my_strstr(arr1, arr2);
	if (res == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了\n");
	}

}