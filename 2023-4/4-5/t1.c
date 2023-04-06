int missingNumber(int* nums, int numsSize){
    int val = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        val ^= nums[i];
    }
    for (i = 0; i <= numsSize; i++)
    {
        val ^= i;
    }
    return val;
}
