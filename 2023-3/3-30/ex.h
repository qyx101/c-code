#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int HpDataType;
typedef struct Heap
{
	HpDataType* dys;
	int size;	
	int capacity;
}Heap;

void HeapInit(Heap* pheap);
void HeapPush(Heap* pheap, HpDataType data);
void HeapPop(Heap* pheap);