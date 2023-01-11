//// 求字符串长度
//#include <stdio.h>
//
//int len1(char* str)
//{
//	int count = 0;
//	char* ps = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - ps; // 指针 - 指针
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int res = len1(arr);
//	printf("%d\n", res);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int* pa = &a;	    // 一级指针 pa
//	int** ppa = &pa;	// 二级指针 ppa
//	printf("%d\n", a);
//	*(*ppa) = 2;
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int* pa = &a;	    // 一级指针 pa
//	int** ppa = &pa;	// 二级指针 ppa
//	int*** pppa = &ppa; // 三级指针 pppa
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	printf("0x%p\n", arr);
//	printf("0x%p\n", &arr[0]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* pa = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	printf("\n");
//	return 0;
//}