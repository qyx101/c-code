#include "List.h"
void t1()
{
	// 测试打印，尾插，头插
	ListNode* head = LTInit();
	/*LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);*/

	LTPushFront(head, 1);
	LTPushFront(head, 2);
	LTPushFront(head, 3);
	LTPrint(head);
}
void t2()
{
	// 测试尾删，头删
	ListNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	/*LTPopBack(head);*/
	LTPopFront(head);
	LTPrint(head);
}
void t3()
{
	// 测试查找, pos之前插入, pos位置删除, 销毁
	ListNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	//LTInsert(LTFind(head, 2), 4);
	LTErace(LTFind(head, 2));
	LTPrint(head);
	LTDestroy(head);
}
int main()
{
	//t1();
	//t2();
	t3();
}