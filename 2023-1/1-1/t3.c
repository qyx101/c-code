// BC123 小乐乐找最大数

#include <stdio.h>
int main()
{
    int arr[4] = {0};
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d\n",max);
    
}