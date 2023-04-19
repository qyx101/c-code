#include <stdio.h>

namespace test1
{
	int a = 0;
	int c = 2;
	namespace test2
	{
		int b = 1;
	}
}
// 2. 展开命名空间中成员a
using test1::a;
// 3. 展开命名空间test1
using namespace test1;
int main()
{
	printf("%d\n", a);
	printf("%d\n", c);
}