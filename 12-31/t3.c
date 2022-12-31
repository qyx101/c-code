// BC111 小乐乐与进制转换

#include <stdio.h>
void print(int x)
{
    if (x > 5)
    {
        print(x/6);
    }
    printf("%d",x%6);

}
int main()
{
    int n = 0;
    scanf("%d",&n);
    print(n);
    return 0;
}
