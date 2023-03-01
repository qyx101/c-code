void reverse(int* arr, int begin, int end)
{
    while (begin < end)
    {
        int tmp = arr[begin];
        arr[begin] = arr[end];
        arr[end] = tmp;
        begin++;
        end--;
    }
}
void rotate(int* nums, int n, int k){
   if (k > n)
   {
       k = k % n;
   }
   // 前n-k 逆置
   reverse(nums,0,n-k-1);
   // 后k 逆置
   reverse(nums,n-k,n-1);
   // 全部逆置
   reverse(nums,0,n-1);
  
}