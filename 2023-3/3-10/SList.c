#include "SList.h"
// 打印
void SLPrint(SListNode* phead)
{
	// phead 可以为空, 空链表可以打印
	while (phead)
	{
		printf("%d -> ", phead->x);
		phead = phead->next;
	}
	printf("NULL\n");
}
// 动态申请一个节点
SListNode* BuySListNode(SLDataType data)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newnode)
	{
		perror("malloc::");
		return;
	}
	newnode->x = data;
	newnode->next = NULL;
	return newnode;
}

// 尾插数据
void SLPushBack(SListNode** pphead, SLDataType x)
{
	// pphead 绝对不能为空, *pphead可以为空
	assert(pphead);
	// 申请节点
	SListNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		// 找尾
		SListNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

// 头插数据
void SLPushFront(SListNode** pphead, SLDataType x)
{
	// pphead 绝对不能为空, *pphead可以为空
	assert(pphead);
	// 申请节点
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

// 尾删数据
void SLPopBack(SListNode** pphead)
{
	// pphead 绝对不能为空, *pphead绝对不能为空，空链表不能再删
	assert(pphead);
	assert(*pphead);

	// 处理删除单节点情况
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	// 处理多个节点情况
	else
	{
		SListNode* tail = *pphead;
		SListNode* prev = tail;
		// 找尾节点前一个节点
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		prev->next = NULL;
		free(tail);
		tail = NULL;
	}
}

// 头删数据
void SLPopFront(SListNode** pphead)
{
	// pphead 绝对不能为空, *pphead绝对不能为空
    // 因为空链表不能再删
	assert(pphead);
	assert(*pphead);

	SListNode* record = *pphead;
	*pphead = (*pphead)->next;
	free(record);
	record = NULL;
}

// 查找
SListNode* SLFind(SListNode* phead, SLDataType data)
{
	while (phead)
	{
		if (phead->x == data)
		{
			return phead;
		}
		else
		{
			phead = phead->next;
		}
	}
	return NULL;
}

// 在pos之前插入data
void SListInsertFront(SListNode** pphead, SListNode* pos, SLDataType data)
{
	// pphead 绝对不能为空, *pphead可以为空
	assert(pphead);
	// pos 绝对不能为空
	assert(pos);
	// 处理一个节点的情况
	if (*pphead == pos)
	{
		SListNode* newnode = BuySListNode(data);
		*pphead = newnode;
		newnode->next = pos;
	}
	// 处理多个节点情况
	else
	{
		// 找到pos之前的节点
		SListNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SListNode* newnode = BuySListNode(data);
		prev->next = newnode;
		newnode->next = pos;
	}
}

// 在pos位置之后插入data
void SListInsertAfter(SListNode* pos, SLDataType data)
{
	assert(pos);
	// 创建新节点
	SListNode* newnode = BuySListNode(data);
	SListNode* after = pos->next;
	pos->next = newnode;
	newnode->next = after;
}

//删除pos位置的值
void SListErase(SListNode** pphead, SListNode* pos)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);
	// 一个节点情况
	if (*pphead == pos)
	{
		SLPopBack(pphead);
	}
	// 多个节点情况
	else
	{
		SListNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}
