#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

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
void HeapPush(HP* php, HPDataType date);

