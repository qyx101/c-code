//#include <stdio.h>
//#include <assert.h>
//
//char* my_strstr(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	char* pc = s1;
//	while (*pc)
//	{
//		s1 = pc;
//		s2 = str2;
//		while (*s1 == *s2)
//		{
//			if (*s2 == '\0')
//			{
//				break;
//			}
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return pc;
//		}
//		pc++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* s1 = "abbcdef";
//	char* s2 = "abc";
//	char* pc = my_strstr(s1, s2);
//	if (pc == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	// 如果 src源地址 < des 终点地址，倒着存
//	if (src < dest)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		// 正着存
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr1, arr1+2, 20);
//	my_memmove(arr1, arr1+2, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n\n");
//	return 0;
//}

/* memset example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	printf(str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	int ret = memcmp(arr1, arr2, 3);
//	printf("%d\n", ret);
//	return 0;
//}


