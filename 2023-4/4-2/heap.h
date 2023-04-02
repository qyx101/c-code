#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int HPDataType;
typedef struct heap
{
	HPDataType* dys;
	int size;
	int capacity;
}HP;

void HPInit(HP* php);
void HPDestroy(HP* php);

void Swap(HPDataType* buf1, HPDataType* buf2);
void AdjustUp(HPDataType* dys, int child);
void AdjustDown(HPDataType* dys, int sz, int parent);

void HeapPush(HP* php, HPDataType data);
void HeapPop(HP* php);

HPDataType HPTop(HP* php);
bool isEmpty(HP* php);
int HPSize(HP* php);
