#include <stdio.h>
int main()
{
	int t1[5] = { 1,2,3,4,5 };
	int t2[5] = { 2,3,4,5,6 };
	int t3[5] = { 3,4,5,6,7 };
	int* arr[3] = { t1,t2,t3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(arr + i));
		}
	}
}