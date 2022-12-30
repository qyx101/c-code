// BC99 序列中整数去重

#include <stdio.h>
int main()
{   
    int num = 0;
    int flag = 0;
    int arr1[1000] = {0};
    int arr2[1000] = {0};
    int n = 0;
    scanf("%d",&n);
    int i = 0;
    for (i = 0; i < n; i++)
    {   
        flag = 0;
        scanf("%d",&arr1[i]);
        for (int j = 0; j < i; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            arr2[num] = arr1[i];
            num++;
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr2[i]);
    }

}