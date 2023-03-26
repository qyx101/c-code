#pragma once
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

// 队列初始化
void QueInit(Queue* pq);
// 销毁队列
void QueDestroy(Queue* pq);
// 队尾入队列
void QuePush(Queue* pq, QueDataType x);
// 队头出队列
void QuePop(Queue* pq);
// 获取队列头元素
QueDataType RetQueFront(Queue* pq);
// 获取队列尾元素
QueDataType RetQueBack(Queue* pq);
// 判断队列是否为空
bool isQueEmpty(Queue* pq);
// 获取队列元素个数
int QueSize(Queue* pq);
