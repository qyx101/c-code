// BC110 井字棋

#include <stdio.h>
int main()
{   
    // input
    char flag = 0;
    char arr[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%c",&arr[i][j]);
            getchar();
        }
    }

    // 判断
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        if(arr[i][0] == arr[i][1] &&  arr[i][1] == arr[i][2] &&  arr[i][2] == arr[i][0])
        {
            flag = arr[i][0];
            break;
        }
        if (arr[0][i] == arr[1][i] &&  arr[1][i] == arr[2][i] &&  arr[2][i] == arr[0][i])
        {
            flag = arr[0][i];
            break;
        }
    }
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == arr[0][0])
    {
        flag = arr[0][0];
    }
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == arr[0][2])
    {
        flag = arr[0][2];
    }

    if (flag == 'K')
    {
        printf("KiKi wins!\n");
    }
    else if (flag == 'B')
    {
        printf("BoBo wins!\n");
    }
    else   
    {
        printf("No winner!\n");
    }

}

