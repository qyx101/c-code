// 统计二进制中1的个数

// 1
// #define _CRT_SECURE_NO_DEPRECATE
// #include <stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int count = 0;
//     while (n)
//     {
//         if (n % 2 == 1)
//         {
//             count++;
//         }
//         n /= 2;
//     }
//     printf("%d\n", count);
//     return 0;
// }

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int t2(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", t2(n));
	return 0;
}

