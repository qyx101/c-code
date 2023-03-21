#include "LT.h"
void t1()
{
	// 测试初始化, 打印, 尾插
	LTNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	LTPrint(head);
}

void t2()
{
	// 测试尾删
	LTNode* head = LTInit();
	LTPushBack(head, 1);
	LTPushBack(head, 2);
	LTPushBack(head, 3);
	LTPopBack(head);
	LTPopBack(head);
	LTPrint(head);
}
int main()
{
	//t1();
	//t2();
}