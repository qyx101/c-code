#include "LT.h"

// 创建新节点
LTNode* BuyNewNode(LTDataType data)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (NULL == newnode)
	{
		perror("api::BuyNewNode::malloc");
		return;
	}
	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;
	return newnode;
}


// 初始化
LTNode* LTInit()
{
	LTNode* phead = BuyNewNode(-1);
	phead->prev = phead;
	phead->next = phead;
	return phead;
}

// 尾插数据
void LTPushBack(LTNode* phead, LTDataType data)
{
	LTNode* tail = phead->prev;
	LTNode* newnode = BuyNewNode(data);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

// 打印
void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	printf("HEAD <-> ");
	while (cur != phead)
	{
		printf("%d <-> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

// 判断是否为哨兵位
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next == phead;
}

// 尾删数据
void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));
	LTNode* tail = phead->prev;
	LTNode* tailprev = tail->prev;
	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
	tail = NULL;
}

// 头插
void LTPushFront(LTNode* phead, LTDataType data)
{
	LTNode* next = phead->prev;
	LTNode* newnode = BuyNewNode(data);
}
// 头删
void LTPopFront(LTNode* phead)
{

}
