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
void AdjustUp(HPDataType* dys, int child);
void AjustDown(HPDataType* dys, int parent, int size);
void HeapPush(HP* php, HPDataType data);
void HeapPop(HP* php);
HPDataType HPTop(HP* php);
bool isEmpty(HP* php);
