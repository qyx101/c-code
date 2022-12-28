// BC101 班级成绩输入输出

#include <stdio.h>
int main()
{
  
    float arr[5][5] = {0.0};
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        int j = 0;
        for (j = 0; j < 5; j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        float sum = 0.0;
        int j = 0;
        for (j = 0; j < 5; j++)
        {
            printf("%.1f ",arr[i][j]);
            sum += arr[i][j];
        }
        printf("%.1f", sum);
        printf("\n");
    }
    return 0;
}