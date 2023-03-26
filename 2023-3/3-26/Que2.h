#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QueDataType;
typedef struct Node
{
	QueDataType data;
	struct Node* next;
}Node;

typedef struct Queue
{
	Node* head;
	Node* tail;
	int size;
}Queue;

// 初始化队列
void QueInit(Queue* pq);
// 销毁队列
void QueDestroy(Queue* pq);
// 入队
void QuePush(Queue* pq, QueDataType x);
// 判断队列是否为空
bool isQueEmpty(Queue* pq);
// 出队
void QuePop(Queue* pq);
// 获取队头元素
QueDataType RetQueFront(Queue* pq);
// 获取队尾元素
QueDataType RetQueBack(Queue* pq);
