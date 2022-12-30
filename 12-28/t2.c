// BC102 矩阵元素定位

#include <stdio.h>
int main()
{
    int arr[10][10] = {0};
    int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x = 0;
    int y = 0;
    scanf("%d %d",&x,&y);
    printf("%d\n",arr[x-1][y-1]);
    return 0;
}