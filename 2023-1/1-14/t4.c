// 字符串左旋

#include <stdio.h>
#include <string.h>

void l_move(char arr[], int k)
{
	//abcdef --> bcdefa
	//bcdefa --> cdefab
	int len = strlen(arr);
	for (int i = 0; i < k; i++)
	{	
		int j = 0;
		char tmp = arr[0];
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[j] = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 2;
	l_move(arr, k);
	printf("%s\n", arr);
	return 0;
}