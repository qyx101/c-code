// 杨氏矩阵

// #include <stdio.h>
// int main()
// {
// 	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
// 	int k = 7;
// 	for (int i = 0; i < 3; i++)
// 	{
// 		for (int j = 0; j < 3; j++)
// 		{
// 			if (arr[i][j] == k)
// 			{
// 				printf("%d %d\n",i,j);
// 			}
// 		}
// 	}

// }

#include <stdio.h>

int find(int arr[3][3], int* px, int* py, int k)
{	
	int key = 0;
	int x = 0;
	int y = *py - 1;
	while (x < 3 && y < 3)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			key = 1;
			return 1;
		}
	}
	if (key == 0)
	{
		return 0;
	}
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int x = 3;
	int y = 3;
	int k = 10;
	int res = find(arr, &x, &y, k);
	if (res == 1)
	{
		printf("找到了，下标是: %d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0; 
}