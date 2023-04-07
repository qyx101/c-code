#include "SList.h"
// 创建节点
SLNode* BuyListNode(SLDataType x)
{
	SLNode* node = (SLNode*)malloc(sizeof(SLNode));
	if (NULL == node)
	{
		perror("BuyListNode::malloc");
		return;
	}
	else
	{
		node->data = x;
		node->next = NULL;
		return node;
	}
	return NULL;
}
// 尾插
void SLPushBack(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	SLNode* newnode = BuyListNode(x);
	if (NULL == *pphead)
	{
		*pphead = newnode;
	}
	else
	{
		// 找尾
		SLNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
// 打印
void SLPrint(SLNode* phead)
{
	SLNode* cur = phead;
	printf("HEAD -> ");
	while (cur)
	{
		printf("%d -> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
// 尾删
void SLPopBack(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	if (NULL == (*pphead)->next)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLNode* tail = *pphead, *prev = NULL;
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}
// 头插
void SLPushFront(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	SLNode* newnode = BuyListNode(x);
	SLNode* next = *pphead;
	*pphead = newnode;
	newnode->next = next;
}
// 头删
void SLPopFront(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}
// 查找
SLNode* SLFind(SLNode* phead, SLDataType x)
{
	SLNode* cur = phead;
	while (cur)
	{
		if (x == cur->data)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
// pos之前插入
void SLInsertFront(SLNode** pphead, SLNode* pos, SLDataType x)
{
	assert(pphead);
	assert(pos);
	SLNode* newnode = BuyListNode(x);
	if (*pphead == pos)
	{
		SLNode* next = *pphead;
		*pphead = newnode;
		newnode->next = next;
	}
	else
	{
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}
// pos之后插入
void SLInsertBack(SLNode* pos, SLDataType x)
{
	assert(pos);
	SLNode* newnode = BuyListNode(x);
	SLNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}
// pos位置删除
void SLErace(SLNode** pphead, SLNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	if (*pphead == pos)
	{
		SLNode* next = pos->next;
		free(pos);
		*pphead = next;
	}
	else
	{
		SLNode* prev = *pphead, *next = pos->next;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = next;
		free(pos);
	}
}
// pos之后删除
void SLEraceAfter(SLNode* pos)
{
	assert(pos);
	assert(pos->next);
	SLNode* next = pos->next->next;
	free(pos->next);
	pos->next = next;
}