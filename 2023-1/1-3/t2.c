// BC118 小乐乐与序列

#include <stdio.h>
int main()
{   
    int tmp = 0;
    int arr[100000] = {0};
    int n = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&tmp);
        arr[tmp] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}