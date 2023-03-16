int removeDuplicates(int* nums, int numsSize) {
    int cur = 1, prev = 0;
    while (cur < numsSize)
    {
        if (nums[cur] == nums[prev])
        {
            cur++;
        }
        else
        {
            nums[++prev] = nums[cur++];
        }
    }
    return prev+1;
}