#include "Heap.h"
void t1()
{
	Heap hp;
	HeapInit(&hp);
	HeapPush(&hp, 1);
	HeapPush(&hp, 18);
	HeapPush(&hp, 42);
	HeapPush(&hp, 12);
	HeapPush(&hp, 2);
	HeapPush(&hp, 3);
	HeapPush(&hp, 50);
}
int main()
{
	t1();
}