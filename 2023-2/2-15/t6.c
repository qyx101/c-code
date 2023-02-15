#include <stdio.h>
int main()
{
    char ch = 0;
    ch = getchar();
    if (ch >= 65 && ch <= 125)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}