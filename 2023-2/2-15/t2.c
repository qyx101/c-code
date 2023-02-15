#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
    char str[10000];
    gets(str);
    char* left = str;
    char* right = str;
    while (*right)
    {
        right++;
    }
    right--;
    while (left <= right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
    printf("%s", str);
}