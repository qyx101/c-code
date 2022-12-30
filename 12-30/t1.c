// HJ108 求最小公倍数

#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    int m = a > b ? a : b;
    while (1)
    {
        if (m % a == 0 && m % b == 0)
        {
            break;
        }
        m ++;
    }
    printf("%d\n",m);
}