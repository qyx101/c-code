// BC105 矩阵相等判定

#include <stdio.h>
int main()
{
    int count = 0;
    int arr1[10][10] = {0};
    int arr2[10][10] = {0};
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                count++;
            }
        }
    }
    if (count == n*m)
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }
    return 0;

}