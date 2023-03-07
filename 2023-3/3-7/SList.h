#include <stdio.h>
#include <stdlib.h>

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