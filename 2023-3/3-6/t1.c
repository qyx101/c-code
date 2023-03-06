int removeDuplicates(int* nums, int numsSize){
    int src = 1, dst = 1;
    while (src < numsSize)
    {
        if (nums[src] != nums[dst-1])
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