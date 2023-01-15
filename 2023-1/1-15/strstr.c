#include <stdio.h>
#include <assert.h>
char* my_strstr(char* str1, char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	char* cp = str1;

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while(s1 != '\0' && s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;		
	}
	return NULL;

}
int main()
{
	char arr1[] = "abbcdef";
	char arr2[] = "bcd";
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