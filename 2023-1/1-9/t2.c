// 字符串逆序
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void reverse(char* str)
{
    char* start = str;
    char* end = str;
    while (*end != '\0')
    {        
        end++; 
    }

    char* left = start                   ;
    char* right = end-1;
     while (left <= right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}
int main()
{
    char arr[20] = "I am a student";
    //gets(arr);
    reverse(arr);
    printf("%s\n", arr);

}