#include <stdio.h>
//#include <errno.h>
//#include <stdlib.h>
//int main()
//{
//	int* pc =(int*)calloc(5,sizeof(int));
//	if (pc == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(pc + i) = i + 1;
//		}
//	}
//	// 使用realloc， 再增加20个字节
//	int* ppc = (int*)realloc(pc, 5 * sizeof(int));
//}

//char* my_strncat(char* des, const char* src, size_t num)
//{
//	while (*des++ != '\0')
//	{
//		;
//	}
//	des--;
//	while (num--)
//	{
//		*des = *src;
//		des++;
//		src++;
//	}
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 5);
//	printf("%s", arr1);
//}