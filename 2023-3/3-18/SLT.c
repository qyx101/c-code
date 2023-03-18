#include "SeqList.h"
// 打印
void SLTPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("%d -> ", phead->x);
		phead = phead->next;
	}
	printf("NULL\n");
}

// 创建新节点
SLTNode* BuyNewNode(SLTDataType data)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (NULL == newnode)
	{
		perror("BuyNewNode::malloc");
		return;
	}
	newnode->x = data;
	newnode->next = NULL;
	return newnode;
}

// 尾插数据
void SLTPushBack(SLTNode** pphead, SLTDataType data)
{
	assert(pphead);
	if (NULL == *pphead)
	{
		SLTNode* newnode = BuyNewNode(data);
		*pphead = newnode;
	}
	else
	{
		// 找尾
		SLTNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		SLTNode* newnode = BuyNewNode(data);
		tail->next = newnode;
	}
}

// 尾删数据
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	// 删除只有一个节点的情况
	if (NULL == (*pphead)->next)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		SLTNode* prev = NULL;
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}

// 头插数据
void SLTPushFront(SLTNode** pphead, SLTDataType data)
{
	assert(pphead);
	SLTNode* newnode = BuyNewNode(data);
	newnode->next = *pphead;
	*pphead = newnode;
}

// 头删数据
void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead);
	assert(pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

// 查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType data)
{
	assert(phead);
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->x == data)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

// pos位置之前插入
void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDataType data)
{
	assert(pphead);
	assert(pos);
	if (pos == *pphead)
	{
		SLTNode* newnode = BuyNewNode(data);
		*pphead = newnode;
		newnode->next = pos;
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SLTNode* newnode = BuyNewNode(data);
		prev->next = newnode;
		newnode->next = pos;
	}
}

// pos位置之后插入
void SLTInsertBack(SLTNode* pos, SLTDataType data)
{
	assert(pos);
	SLTNode* newnode = BuyNewNode(data);
	SLTNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}

// pos位置删除
void SLTErace(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);
	if (pos == *pphead)
	{
		*pphead = pos->next;
		free(pos);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SLTNode* next = pos->next;
		free(pos);
		prev->next = next;
	}
}