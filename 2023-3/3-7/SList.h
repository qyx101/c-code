#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;
typedef struct SListNode
{
	SLDataType x;
	struct SListNode* next;
}SListNode;

// 创建新节点
SListNode* BuySListNode(SLDataType x);
// 尾插数据
void SLPushBack(SListNode** record, SLDataType x);
// 打印
void SListPrint(SListNode* node);
// 头插数据
void SLPushFront(SListNode** record, SLDataType x);
// 尾删数据
void SLPopBack(SListNode** record);
// 头删数据
void SLPopFront(SListNode** record);

SListNode* SListFind(SListNode* plist, SLDataType x);
void SListInsertAfter(SListNode* pos, SLDataType x);
void SListEraseAfter(SListNode* pos);
