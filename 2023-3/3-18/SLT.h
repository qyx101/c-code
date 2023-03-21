#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef int SLTDataType;
typedef struct SLTNode
{
	SLTDataType x;
	struct SLTNode* next;
}SLTNode;

// 打印
void SLTPrint(SLTNode* phead);
// 创建新节点
SLTNode* BuyNewNode(SLTDataType data);
// 尾插数据
void SLTPushBack(SLTNode** pphead, SLTDataType data);
// 尾删数据
void SLTPopBack(SLTNode** pphead);
// 头插数据
void SLTPushFront(SLTNode** pphead, SLTDataType data);
// 头删数据
void SLTPopFront(SLTNode** pphead);
// 查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType data);
// pos位置之前插入
void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDataType data);
// pos位置之后插入
void SLTInsertBack(SLTNode* pos, SLTDataType data);
// pos位置删除
void SLTErace(SLTNode** pphead, SLTNode* pos);
// 销毁
void SLTDestroy(SLTNode** pphead);

