// BC106 上三角矩阵判定

#include <stdio.h>
int main()
{
    int count = 0;
    // 输入
    int arr[10][10] = {0};
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    // 判断
    for (i = 0;i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            count += arr[i][j];
        }
    }
    if (count == 0)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }


}