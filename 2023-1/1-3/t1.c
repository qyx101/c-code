// BC117 小乐乐走台阶

#include <stdio.h>

int fib(int n)
{
    if (n <= 2)
    {
        return n;
    }
    else 
    {
        return fib(n-1) + fib(n-2);
    }
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int res = fib(n);
    printf("%d",res);
}