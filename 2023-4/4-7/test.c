#include "SList.h"
void t1()
{
	// 测试打印, 尾插, 尾删
	SLNode* head = NULL;
	SLPushBack(&head, 1);
	SLPushBack(&head, 2);
	SLPushBack(&head, 3);
	SLPopBack(&head);
	SLPrint(head);
}
void t2()
{
	// 测试头插，头删
	SLNode* head = NULL;
	SLPushFront(&head, 1);
	SLPushFront(&head, 2);
	SLPushFront(&head, 3);
	SLPopFront(&head);
	SLPrint(head);
}
void t3()
{
	// 测试查找,pos前/后插入
	SLNode* head = NULL;
	SLPushBack(&head, 1);
	SLPushBack(&head, 2);
	SLPushBack(&head, 3);
	SLPushBack(&head, 4);
	SLPushBack(&head, 5);
	/*SLInsertFront(&head, SLFind(head, 1), 6);
	SLInsertFront(&head, SLFind(head, 4), 7);*/
	SLInsertBack(SLFind(head, 3), 6);
	SLInsertBack(SLFind(head, 5), 7);
	SLPrint(head);
}
void t4()
{
	// 测试pos位置,之后删除
	SLNode* head = NULL;
	SLPushBack(&head, 1);
	SLPushBack(&head, 2);
	SLPushBack(&head, 3);
	SLPushBack(&head, 4);
	SLPushBack(&head, 5);
	//SLErace(&head, SLFind(head, 3));
	SLEraceAfter(SLFind(head, 1));
	SLPrint(head);

}
int main()
{
	//t1();
	//t2();
	//t3();
	t4();
}