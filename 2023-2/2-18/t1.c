//#include <stdio.h>
//int main()
//{
//	int t1[5] = { 1,2,3,4,5 };
//	int t2[5] = { 2,3,4,5,6 };
//	int t3[5] = { 3,4,5,6,7 };
//	int* arr[3] = { t1,t2,t3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(arr + i))+j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 0,1,2,3,4};
//	int(*pa)[5] = &arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *((*pa)+i));
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n\n", arr + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int(*pa)[5] = arr;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(pa+i)+j));
//		}
//		printf("\n");
//	}
//}
