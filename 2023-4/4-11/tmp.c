#include "queue.h"

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

}


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QueDataType;

typedef struct QueNode
{
	QueDataType data;
	struct QueNode* next;
}QueNode;

typedef struct Queue
{
	QueNode* head;
	QueNode* tail;
	int size;
}Queue;

// 初始化队列
void QueInit(Queue* pq);
// 销毁队列
void QueDestroy(Queue* pq);
// 入队
void QuePush(Queue* pq, QueDataType x);
// 出队
void QuePop(Queue* pq);
// 计算队列中数据个数
int QueSize(Queue* pq);
// 判空
bool isQueEmpty(Queue* pq);
// 取队头数据
QueDataType QueFront(Queue* pq);
// 取队尾数据
QueDataType QueBack(Queue* pq);
