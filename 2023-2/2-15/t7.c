#include <stdio.h>
int main()
{
    char ch = 0;
    ch = getchar();
    int i = 0;
    for(i=0;i<5;i++) 
    {
        //处理空格
        int j = 0;
        for (j=0;j<4-i;j++)
        {
            printf(" ");
        }
        for (j=0;j<=i;j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
}