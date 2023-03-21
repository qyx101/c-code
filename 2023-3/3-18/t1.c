#include "SeqList.h"
void t1()
{
	// 测试尾插，打印
	SLTNode* head = NULL;
	SLTPushBack(&head, 1);
	SLTPushBack(&head, 2);
	SLTPushBack(&head, 3);
	SLTPrint(head);
}
void t2()
{
	// 测试尾删
	SLTNode* head = NULL;
	SLTPushBack(&head, 1);
	SLTPushBack(&head, 2);
	SLTPushBack(&head, 3);
	SLTPopBack(&head);
	SLTPopBack(&head);
	SLTPrint(head);
}
void t3()
{
	// 测试头插
	SLTNode* head = NULL;
	SLTPushFront(&head, 1);
	SLTPushFront(&head, 2);
	SLTPushFront(&head, 3);
	SLTPrint(head);
}
void t4()
{
	// 测试头删
	SLTNode* head = NULL;
	SLTPushFront(&head, 1);
	SLTPushFront(&head, 2);
	SLTPushFront(&head, 3);
	SLTPopFront(&head);
	SLTPopFront(&head);
	SLTPrint(head);

}
void t5()
{
	// 测试查找, pos之前插入
	SLTNode* head = NULL;
	SLTPushBack(&head, 1);
	SLTPushBack(&head, 2);
	SLTPushBack(&head, 3);
	SLTPushBack(&head, 4);
	SLTPushBack(&head, 5);
	// 查找
	SLTNode* ret = SLTFind(head, 1);
	SLTInsertFront(&head, ret, 6);
	SLTPrint(head);
}
void t6()
{
	// 测试pos之后插入
	SLTNode* head = NULL;
	SLTPushBack(&head, 1);
	SLTPushBack(&head, 2);
	SLTPushBack(&head, 3);
	SLTPushBack(&head, 4);
	SLTPushBack(&head, 5);
	SLTNode* ret = SLTFind(head, 3);
	SLTInsertBack(ret, 6);
	SLTPrint(head);
}
void t7()
{
	// 测试pos位置删除
	SLTNode* head = NULL;
	SLTPushBack(&head, 1);
	SLTPushBack(&head, 2);
	SLTPushBack(&head, 3);
	SLTPushBack(&head, 4);
	SLTPushBack(&head, 5);
	SLTNode* ret = SLTFind(head, 1);
	SLTErace(&head, ret);
	SLTPrint(head);
}
int main()
{
	//t1();
	//t2();
	//t3();
	//t4();
	//t5();
	//t6();
	//t7();
}