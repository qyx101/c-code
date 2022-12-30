// OR62 倒置字符串

#include <stdio.h>
#include <string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char str[100] = {0};
	gets(str);
	int len = strlen(str);
	// 逆序整个字符串
	reverse(str,&str[len-1]);
	
	// 逆序每个单词
	char* start = str;
	char* end = str;
	while (1)
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*(end + 2) != '\0')
		{
			end ++;
			start = end;
		}
		else 
		{
			break;
		}
	}
	printf("%s\n", str);
}