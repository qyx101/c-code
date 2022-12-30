// BC108 矩阵交换

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int arr[10][10] = { 0 };
    int n = 0;
    int m = 0;
    int i = 0;
    // 输入: 行，列
    scanf("%d %d", &n, &m);
    // 输入: 矩阵
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // 输入: 操作次数,及操作
    int k = 0;
    char t = 0;
    int x = 0;
    int y = 0;
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        scanf(" %c %d %d", &t, &x, &y);
        // 行交换
        if (t == 'r')
        {   
            int j = 0;
            for (j = 0; j < n; j++)
            {
                int tmp = arr[x - 1][j];
                arr[x - 1][j] = arr[y - 1][j];
                arr[y - 1][j] = tmp;

            }
        }
        // 列交换
        else if (t == 'c')
        {   
            int j = 0;
            for (j = 0; j < m; j++)
            {
                int tmp = arr[j][x - 1];
                arr[j][x - 1] = arr[j][y - 1];
                arr[j][y - 1] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


}