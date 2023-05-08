#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* dys;
	int capacity;
	int size;
}HP;

void HPInit(HP* php);
void HPPush(HP* php, HPDataType data);
void AdjustUp(HPDataType* dys, int child);
void AjustDown(HPDataType* dys, int parent, int sz);
void HPPop(HP* php);
HPDataType HeapTop(HP* php);
bool HeapEmpty(HP* php);
int HeapSize(HP* php);
