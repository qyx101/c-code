#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;
typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SLNode;

// 创建节点
SLNode* BuyListNode(SLDataType x);
// 尾插
void SLPushBack(SLNode** pphead, SLDataType x);
// 打印
void SLPrint(SLNode* phead);
// 尾删
void SLPopBack(SLNode** pphead);
// 头插
void SLPushFront(SLNode** pphead, SLDataType x);
// 头删
void SLPopFront(SLNode** pphead);
// 查找
SLNode* SLFind(SLNode* phead, SLDataType x);
// pos之前插入
void SLInsertFront(SLNode** pphead, SLNode* pos, SLDataType x);
// pos之后插入
void SLInsertBack(SLNode* pos, SLDataType x);
// pos位置删除
void SLErace(SLNode** pphead, SLNode* pos);
// pos之后删除
void SLEraceAfter(SLNode* pos);
