// BC109 杨辉三角

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
    int arr[30][30] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
            if (i == j)
            {
                arr[i][j] = 1;
            }
            if (j > 0 && i > 1)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
   
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j <= i; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}