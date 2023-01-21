// 字符串比较
// 模拟实现 strcmp

// 方法1
#include <stdio.h>
#include <assert.h>
int my_strcmp(char* des, const char* src)
{
	int tmp = 0;
	assert(des && src);
	while (*des)
	{
		if (*des > *src)
		{
			tmp = 1;
		}
		else if (*des == *src)
		{
			tmp =  0;
		}
		else
		{
			tmp =  -1;
		}		
		des++;
		src++;
	}
	return tmp;
}

int main()
{
	char arr1[10] = "abd";
	char arr2[10] = "abc";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
}

// 方法2
#include <stdio.h>
#include <assert.h>

int my_strcmp(char* des, char* src)
{
	assert(des && src);
	// 判断是否相等
	while (*des == *src)
	{
		if (*des == '\0')
		{
			return 0;
		}
		des++;
		src++;
	}
	// 判断 >, <
	if (*des > *src)
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
	char arr1[] = "abb";
	char arr2[] = "abc";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}