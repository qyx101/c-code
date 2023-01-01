// BC125 小乐乐转换成绩

#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    if (n >= 90 && n <= 100)
    {
        printf("A\n");
    }
    else if (n >= 80 && n <= 89)
    {
        printf("B\n");
    }
    else if (n >= 70 && n <= 79)
    {
        printf("C\n");
    }
    else if (n >= 60 && n <= 69)
    {
        printf("D\n");
    }
    else if (n <= 59 && n >= 0)
    {
         printf("E\n");
    }
    else
    {
        printf("F\n");
    }
}