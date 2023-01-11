//#include <stdio.h>
//int main()
//{
//	char* str = "abcdef";
//	printf("%s\n", str);
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* arr[3] = { "aaa","bbb","ccc" }; //字符指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", *(arr + i));
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7};
//
//	int* arr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//}