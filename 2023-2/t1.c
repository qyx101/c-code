//#include <stdio.h>
//#include <stddef.h>
//struct t1
//{
//	char a1;
//	int a2;
//	char a3;
//}t1;
//
//struct t2
//{
//	char a1;
//	char a2;
//	int a3;
//}t2;
//int main()
//{
//	printf("%d\n", offsetof(struct t1, a1));
//	printf("%d\n", offsetof(struct t1, a2));
//	printf("%d\n", offsetof(struct t1, a3));
//}

//#include <stdio.h>
//struct t1
//{
//	double n1;
//	char n2;
//	int n3;
//};
//struct t2
//{
//	char c1;
//	struct t1 c2;
//	double c3;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct t2));
//}

//#include <stdio.h>
//struct t1
//{
//	char n1;
//	int n2;
//};
//int main()
//{
//	return 0;
//}

//#include <stdio.h>
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//    char c1;
//    int i;
//    
//};
//int main()
//{
//   
//}