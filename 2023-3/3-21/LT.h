#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	LTDataType data;
	struct ListNode* next;
}LTNode;

// 初始化
LTNode* LTInit();
// 打印
void LTPrint(LTNode* phead);
// 尾插数据
void LTPushBack(LTNode* phead, LTDataType data);
// 尾删数据
void LTPopBack(LTNode* phead);
// 头插数据
void LTPushFront(LTNode* phead, LTDataType data);
// 头删数据
void LTPopFront(LTNode* phead);
// 查找
LTNode* LTFind(LTNode* phead, LTDataType x);
// pos的前面进行插入
void LTInsert(LTNode* pos, LTDataType x);
// 删除pos位置的节点
void LTErase(LTNode* pos);
