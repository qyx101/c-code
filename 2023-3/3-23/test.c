#include "LT.h"
void t1()
{
	// 初始化, 打印，尾插
	ListNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	LTPrint(head);
}
void t2()
{
	// 测试尾删
	ListNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	LTPopBack(head);
	LTPopBack(head);
	LTPopBack(head);
	LTPopBack(head);
	LTPrint(head);
}
void t3()
{
	// 测试头插
	ListNode* head = LTInit();
	LTPushFront(head, 1);
	LTPushFront(head, 2);
	LTPushFront(head, 3);
	LTPrint(head);
}
void t4()
{
	// 测试头删
	ListNode* head = LTInit();
	LTPushFront(head, 1);
	LTPushFront(head, 2);
	LTPushFront(head, 3);
	LTPopFront(head);
	LTPrint(head);
}
void t5()
{
	// 测试查找, pos之前插入
	ListNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	LTPushBack(head, 4);
	LTPushBack(head, 5);
	ListNode* ret = LTFind(head, 3);
	LTInsertFront(ret, 6);
	LTPrint(head);
}
void t6()
{
	// 测试pos之后插入
	ListNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	LTPushBack(head, 4);
	LTPushBack(head, 5);
	ListNode* ret = LTFind(head, 3);
	LTInsertBack(ret, 6);
	LTPrint(head);
}
void t7()
{
	// 测试pos位置删除
	ListNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	LTPushBack(head, 4);
	LTPushBack(head, 5);
	ListNode* ret1 = LTFind(head, 2);
	ListNode* ret2 = LTFind(head, 4);
	LTErace(head, ret1);
	LTErace(head, ret2);
	LTPrint(head);
}
void t8()
{
	// 测试销毁
	ListNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	LTDestroy(head);
	// head指向的空间已经释放, 但是未置空
	head = NULL;
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
	t8();
}