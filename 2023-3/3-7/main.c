#include "SList.h"
void test1()
{
	SListNode* record = NULL;
	SLPushBack(&record,1);
	SLPushBack(&record, 2);
	SLPushBack(&record, 3);
	SListPrint(record);
}
int main()
{
	test1();
}