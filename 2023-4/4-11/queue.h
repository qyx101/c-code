#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
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

// 初始化
void QueInit(Queue* pq);
// 销毁
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



