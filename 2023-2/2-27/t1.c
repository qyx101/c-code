#include <stdio.h>
int missingNumber(int* nums, int n) {
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        val = val ^ nums[i];
    }
    for (int i = 1; i < n+1; i++)
    {
        val = val ^ i;
    }
    return val;
}
int main()
{
    int arr[] = { 3,0,1 };
    int ret = missingNumber(arr,3);
    printf("%d\n", ret);
}