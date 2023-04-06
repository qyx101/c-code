#include "SeqList.h"
void t1()
{
	// 测试初始化, 销毁
	SL sl;
	SLInit(&sl);
	SLDestroy(&sl);
}
void t2()
{
	// 测试打印，尾插，尾删
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	/*SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 6);*/
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);
}
void t3()
{
	// 测试头插, 头删
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPopFront(&sl);
	SLPrint(&sl);
}
void t4()
{
	// 测试查找，pos插入
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	/*SLInsert(&sl, 0, 6);
	SLInsert(&sl, 6, 7);
	SLInsert(&sl, SLFind(&sl,3), 8);
	SLPrint(&sl);*/
	SLErase(&sl, SLFind(&sl, 3));
	SLPrint(&sl);
}
void t5()
{
	// 测试复用代码
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPopBack(&sl);
	SLPrint(&sl);
}
int main()
{
	//t1();
	//t2();
	//t3();
	//t4();
	t5();
}