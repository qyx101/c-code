int missingNumber(int* nums, int n) {
    int sum = (n+1)*n/2;
    for (int i = 0; i < n; i++)
    {
        sum -= nums[i];
    }
    return sum;
}