#include "queue.h"
// 初始化
void QueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}
// 销毁
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
// 入队
void QuePush(Queue* pq, QueDataType x)
{
	assert(pq);
	QueNode* newnode = (QueNode*)malloc(sizeof(QueNode));
	if (NULL == newnode)
	{
		perror("QuePush::malloc fail");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;

	if (NULL == pq->head)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
	pq->size++;
}
// 出队
void QuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	// 处理单个节点的特殊情况
	if (NULL == pq->head->next)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QueNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	pq->size--;
}
// 计算队列中数据个数
int QueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}
// 判空
bool isQueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}
// 取队头数据
QueDataType QueFront(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	return pq->head->data;
}
// 取队尾数据
QueDataType QueBack(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	return pq->tail->data;
}