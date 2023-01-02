// BC115 小乐乐与欧几里得

/*
(不通过)
#include <stdio.h>
int main()
{
    long long n = 0;
    long long m = 0;
    scanf("%lld %lld",&n,&m);
    long long x,y; // x是最大公约数，y是最小公倍数

    // 求最小公倍数
    y = (n > m ? n : m);
    while (1)
    {
        if (y % n == 0 && y % m == 0)
        {
            break;
        }
        y++;
    }

    // 求最大公因数
    long long w = (n > m ? m : n);
    x = 1;
    long long i = 0;
    for (i = 1; i <= w; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            if (i > x)
            {
                x = i;
            }
        }
    }
    printf("%lld\n",x+y);
}

*/