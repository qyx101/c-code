#include <stdio.h>
int main()
{
    char ch = 0;
    while ((ch = getchar()) != EOF)
    {
        printf("%c\n",ch+32);
        getchar();
    }
    return 0;
}