void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int end1 = m-1, end2 = n-1, dst = m+n-1;
    while (end1 >= 0 && end2 >= 0)
    {
        if (nums2[end2] > nums1[end1])
        {
            nums1[dst] = nums2[end2];
            dst--, end2--;
        }
        else 
        {
            nums1[dst] = nums1[end1];
            dst--, end1--;
        }
    }
    while (end2 >= 0)
    {
        nums1[dst] = nums2[end2];
        dst--, end2--;
    }
}