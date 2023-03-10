#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType x;
	struct SListNode* next;
}SListNode;

// 打印
void SLPrint(SListNode* phead);
// 动态申请一个节点
SListNode* BuySListNode(SLDataType x);
// 尾插数据
void SLPushBack(SListNode** pphead, SLDataType x);
// 头插数据
void SLPushFront(SListNode** pphead, SLDataType x);
// 尾删数据
void SLPopBack(SListNode** pphead);
// 头删数据
void SLPopFront(SListNode** pphead);

// 查找
SListNode* SLFind(SListNode* phead, SLDataType x);
// 在pos之前插入data
void SListInsertFront(SListNode** pphead, SListNode* pos, SLDataType data);
// 在pos之后插入data
void SListInsertAfter(SListNode* pos, SLDataType x);
//删除pos位置的值
void SListErase(SListNode** pphead,SListNode* pos);
// 销毁
void SListDestroy(SListNode* pos);