#pragma once
#include "Queue.h"

// 队列初始化
void QueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}
// 销毁队列
void QueDestroy(Queue* pq)
{
	assert(pq);
	QueNode* cur = pq->head;
	while (cur)
	{
		QueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}
// 队尾入队列
void QuePush(Queue* pq, QueDataType x)
{
	assert(pq);
	QueNode* newnode = (QueNode*)malloc(sizeof(QueNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		// 尾插
		if (NULL == pq->tail)
		{
			pq->head = pq->tail = newnode;
		}
		else
		{
			pq->tail->next = newnode;
			pq->tail = newnode;
		}
	}
	pq->size++;
}
// 队头出队列
void QuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QueNode* first = pq->head;
		QueNode* next = first->next;
		free(first);
		pq->head = next;
	}
	pq->size--;
}
// 获取队列头元素
QueDataType RetQueFront(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	return pq->head->data;
}
// 获取队列尾元素
QueDataType RetQueBack(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	return pq->tail->data;
}
// 判断队列是否为空
bool isQueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}
// 获取队列元素个数
int QueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}
