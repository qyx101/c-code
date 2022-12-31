// BC112 小乐乐求和

#include <stdio.h>
int main()
{   
    long long sum = 0;
    long long n = 0;
    scanf("%lld",&n);
    int i = 0;
    for (i = 1 ; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld\n",sum);

}