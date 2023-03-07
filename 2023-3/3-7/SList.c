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

void SListPrint(SListNode* record)
{
	while (record)
	{
		printf("%d ", record->x);
		record = record->next;
	}
}