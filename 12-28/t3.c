// BC103 序列重组矩阵

#include <stdio.h>
int main()
{
    int arr[10][10] = {0};
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int i = 0;
    for(i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0;j < m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}