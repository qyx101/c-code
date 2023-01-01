// BC114 小乐乐排电梯

#include <stdio.h>
int main()
{
    // input 
    int n = 0;
    scanf("%d",&n);
    if (n < 12)
    {
        printf("%d",2);
    }
    else
    {
        printf("%d",n/12*4+2);
    }
    return 0;
}