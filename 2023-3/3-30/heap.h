#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* dys;
	int size;
	int capacity;
}HP;

void HPInit(HP* php);
void HPDestroy(HP* php);

void AdjustUp(HPDataType* dys, int child);
void AdjustDown(HPDataType* dys, int parent, int sz);

void HeapPush(HP* php, HPDataType data);
void HeapPop(HP* php);
HPDataType HPTop(HP* php);
bool IsHPEmpty(HP* php);
int HPSize(HP* php);


