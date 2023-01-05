// 求两个数二进制中不同位的个数

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
    int x = 0;
    int y = 0;
    int count = 0;
    scanf("%d %d", &x, &y);
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if ((((x >> i) & 1) ^ ((y >> i) & 1)) == 1)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}