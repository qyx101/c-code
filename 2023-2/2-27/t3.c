#include <stdio.h>
void rotate(int* nums, int n, int k) {
    int i = 0;
    for (i = 0; i < k; i++)
    {
        int j = 0;
        for (j = n - 1; j > 0; j--)
        {
            int tmp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = tmp;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
}
int main()
{
    int arr[] = { 1,2,3,4,5,6,7 };
    rotate(arr, 7, 3);
}