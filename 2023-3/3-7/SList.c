#include "SList.h"

SListNode* BuySListNode(SLDataType data)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newnode)
	{
		perror("malloc::");
		return;
	}
	else
	{
		newnode->x = data;
		newnode->next = NULL;
		return newnode;
	}
}

void SLPushBack(SListNode** head,SLDataType x)
{
	SListNode* newnode = BuySListNode(x);
	// 无节点的情况
	if (NULL == *head)
	{
		*head = newnode;
	}
	else
	{
		// 存在节点, 找尾
		SListNode* tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void SListPrint(SListNode* pc)
{
	while (pc)
	{
		printf("%d -> ", pc->x);
		pc = pc->next;
	}
	printf("NULL");
}

void SLPushFront(SListNode** pc, SLDataType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pc;
	*pc = newnode;
}

void SLPopBack(SListNode** pc)
{
	// 处理无节点情况
	assert(*pc);

	// 处理删除一个节点的情况
	if ((*pc)->next == NULL)
	{
		free(*pc);
		*pc = NULL;
	}
	else
	{
		// 处理删除多个节点的情况
		SListNode* tail = *pc;
		SListNode* prev = tail;
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

void SLPopFront(SListNode** pc)
{
	// 处理无节点情况
	assert(*pc);
	// 处理删除单/多节点情况
	SListNode* first = *pc;
	*pc = first->next;
	free(first);
	first = NULL;
}