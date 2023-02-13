// 求两个数的最大公约数
// 暴力枚举
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int m = 0;
    scanf("%d %d",&a,&b);
    m = (a>b)?a:b;
    while (m % a != 0 || m % b != 0)
    {
        m++;
    }
    printf("%d\n",m);
}
