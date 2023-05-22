#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int HPDataType;
typedef struct heap
{
	HPDataType* dys;
	int capcacity;
	int size;
}HP;

// 初始化与销毁
void HeapInit(HP* php);
void HeapDestroy(HP* php);

// 向上调整
void AdjustUp(HPDataType* dys, int child);
// 向下调整
void AdjustDown(HPDataType* dys, int parent, int sz);

void HeapPush(HP* php, HPDataType data);
void HeapPop(HP* php);

HPDataType HeapTop(HP* php);
bool isEmpty(HP* php);
