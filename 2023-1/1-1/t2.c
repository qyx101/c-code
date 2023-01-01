// BC118 小乐乐与序列

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
    // input
    int num = 0;
    int key = 0;
    int arr1[100000] = { 0 };
    int arr2[100000] = { 0 };
    int n = 0;
    scanf("%d", &n);

    // 去重
    int i = 0;
    for (i = 0; i < n; i++)
    {
        key = 0;
        scanf("%d", &arr1[i]);
        for (int j = 0; j < i; j++)
        {
            if (arr1[i] == arr2[j])
            {
                key = 1;
                break;
            }
        }
        if (key == 0)
        {
            arr2[num] = arr1[i];
            num++;
        }
    }

    // 冒泡排序
    for (i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                int tmp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = tmp;
            }
        }
    }

    // print
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

}