// 模拟 strlen

// 1. 计数器count 方法

#include <stdio.h>
#include <assert.h>

size_t Strlen1(const char* str)
{
	//保证指针有效性，不是空指针
	assert(str != NULL);
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
	char arr[] = "abcdef";
	int res = Strlen1(arr);
	printf("%d\n", res);
	return 0;
}

// 2. 递归

#include <stdio.h>
#include <assert.h>

size_t Strlen1(const char* str)
{
	//保证指针有效性，不是空指针
	assert(str != NULL);
	if (*str != '\0')
	{
		return 1 + Strlen1(str + 1); // abcdef\0
	}
	else
	{
		return 0;
	}
}
size_t main()
{
	char arr[] = "abcdef";
	int res = Strlen1(arr);
	printf("%d\n", res);
	return 0;
}

// 3. 指针 - 指针

#include <stdio.h>
#include <assert.h>

size_t Strlen1(const char* str)
{
	//保证指针有效性，不是空指针
	assert(str != NULL);
	char* end = str;
	while (*end!= '\0')
	{
		end++;
	}
	return end - str;
}
int main()
{
	char arr[] = "abcdef";
	int res = Strlen1(arr);
	printf("%d\n", res);
	return 0;
}