#include "SeqList.h"
void test()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	//SLInsert(&s1, 0, 6);
	//SLPushFront(&s1, 5);
	//SLPopFront(&s1);
	//SLErase(&s1, 1);

	
	SLShow(&s1);
}
int main()
{
	test();
}