#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	LTDataType data;
	struct ListNode* next;
}ListNode;

// 初始化
ListNode* LTInit();
// 创建节点
ListNode* BuyListNode(LTDataType x);
// 打印
void LTPrint(ListNode* phead);
// 尾插
void LTPushBack(ListNode* phead, LTDataType x);
// 头插
void LTPushFront(ListNode* phead, LTDataType x);
// 尾删
void LTPopBack(ListNode* phead);
// 头删
void LTPopFront(ListNode* phead);
// 查找
ListNode* LTFind(ListNode* phead, LTDataType x);
// pos之前插入
void LTInsert(ListNode* pos, LTDataType x);
// pos位置删除
void LTErace(ListNode* pos);
// 销毁
void LTDestroy(ListNode* phead);