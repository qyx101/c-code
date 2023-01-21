// strlen
// 

// 计数器实现
#include <stdio.h>
#include <assert.h>
size_t my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[] = "abcdef";
	int ret = my_strlen(str);
	printf("%d\n", ret);
	return 0;
}

// 递归实现
#include <stdio.h>
#include <assert.h>
size_t my_strlen(const char* str)
{
	assert(str);
	if (*str != '\0')
	{
		return 1 + my_strlen(str+1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char str[] = "abcdef";
	int ret = my_strlen(str);
	printf("%d\n", ret);
	return 0;
}

//  指针 - 指针
#include <stdio.h>
#include <assert.h>
size_t my_strlen(const char* str)
{
	assert(str);
	char* left = str;
	char* right = str;
	while (*right != '\0')
	{
		right++;
	}
	return right - left;
}
int main()
{
	char str[] = "abcdef";
	int ret = my_strlen(str);
	printf("%d\n", ret);
	return 0;
}
