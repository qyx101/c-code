#include <stdio.h>

namespace test1
{
	int a = 0;
	namespace test2
	{
		int b = 1;
	}
}

int main()
{
	// 1. 指定命名空间域
	printf("%d\n", test1::a);
	printf("%d\n", test1::test2::b);

}