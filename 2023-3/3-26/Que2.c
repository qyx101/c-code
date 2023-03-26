#include "Queue.h"

// 初始化队列
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
	Node* cur = pq->head;
	while (cur)
	{
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}
// 入队
void QuePush(Queue* pq, QueDataType x)
{
	assert(pq);
	Node* newnode = (Node*)malloc(sizeof(Node));
	if (NULL == newnode)
	{
		perror("malloc fail");
		return;
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		if (pq->tail == NULL)
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
// 判断队列是否为空
bool isQueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}
// 出队
void QuePop(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		Node* first = pq->head;
		Node* next = pq->head->next;
		free(first);
		pq->head = next;
	}
	pq->size--;
}
// 获取队头元素
QueDataType RetQueFront(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	return pq->head->data;
}
// 获取队尾元素
QueDataType RetQueBack(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	return pq->tail->data;
}
// 获取队列元素个数
int QueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}