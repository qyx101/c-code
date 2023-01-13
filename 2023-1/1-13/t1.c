#include <stdio.h>
void t1(char* str, int k)
{
	for (int i = 0; i < k; i++)
	{
		int j = 0;
		for (j = 0; j <  3; j++)
		{
			
				char tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			
		}
	}
	printf("%s\n", str);
}
int main()
{
	char str[] = "ABCD";
	int k = 0;
	scanf("%d", &k);
	t1(str, k);
}