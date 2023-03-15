#include "SeqList.h"

// 测试初始化和销毁
void test1()
{
	// 创建顺序表t1
	SL s1;
	// 初始化顺序表
	SLInit(&s1);
	// 销毁
	SLDestroy(&s1);
}
void test2()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);
}
void t3()
{
	SL s1;
	SLInit(&s1);
	// 测试头插
	SLPushFront(&s1,1);
	SLPushFront(&s1,2);
	SLPushFront(&s1,3);
	SLPushFront(&s1,4);
	SLPushFront(&s1,5);
	// 测试尾删
	SLPopBack(&s1);
	// 测试头删
	SLPopFront(&s1);
	SLPrint(&s1);
}
void t4()
{
	SL s1;
	SLInit(&s1);
	SLPushFront(&s1, 1);
	SLPushFront(&s1, 2);
	SLPushFront(&s1, 3);
	SLPushFront(&s1, 4);
	SLPushFront(&s1, 5);
	SLPrint(&s1);
	// 测试查找
	printf("%d\n", SLFind(&s1, 3));
	// pos位置删除
	SLErase(&s1, 2);
	SLPrint(&s1);
	// 在pos位置插入数据X
	SLInsert(&s1, 2, 6);
	SLPrint(&s1);
}

int main()
{
	// 测试初始化和销毁
	//test1();
	// 测试显示,增容,尾插
	//test2();
	// 测试尾删，头删，头插数据
	//t3();
	// 测试查找, pos位置删除, pos位置插入
	t4();
}