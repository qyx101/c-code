#include "SList.h"
void test1()
{
    // 测试尾插
	SListNode* record = NULL;
	SLPushBack(&record,1);
	SLPushBack(&record, 2);
	SLPushBack(&record, 3);
	SListPrint(record);
}
void test2()
{
    // 测试头插
	SListNode* record = NULL;
	SLPushFront(&record, 1);
	SLPushFront(&record, 2);
	SLPushFront(&record, 3);
	SListPrint(record);
}
void test3()
{
     // 测试尾删
	SListNode* record = NULL;
	SLPushFront(&record, 1);
	SLPushFront(&record, 2);
	SLPushFront(&record, 3);
	SLPopBack(&record);
	SListPrint(record);

}
void test4()
{
    // 测试头删
	SListNode* record = NULL;
	SLPushFront(&record, 1);
	SLPushFront(&record, 2);
	SLPushFront(&record, 3);
	SLPopFront(&record);
	SListPrint(record);
}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
}