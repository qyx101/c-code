int removeElement(int* nums, int numsSize, int val){
    int src = 0, dst = 0;
    while (numsSize--)
    {
        if (nums[src] != val)
        {
            nums[dst] = nums[src];
            dst++;
            src++;
        }
        else
        {
            src++;
        }
    }
    return dst;
}