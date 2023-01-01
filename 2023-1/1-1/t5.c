// BC129 小乐乐计算函数

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int max3(int a, int b, int c)
{
    int max = a;
    if (b > max)  
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    float m = ((float)max3(a+b,b,c)/(max3(a,b+c,c)+max3(a,b,b+c)));
    printf("%.2f\n",m);
    return 0;
}