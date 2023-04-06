void reverse(int* nums, int left, int right)
{
    while (left <= right)
    {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        left++, right--;
    }
}
void rotate(int* nums, int n, int k){
    int sign = k%n;
    // 前n-k个逆置
    reverse(nums,0,n-sign-1);
    // 后个k个逆置
    reverse(nums,n-sign,n-1);
    // 整体逆置
    reverse(nums,0,n-1);
}