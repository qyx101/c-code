#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int HPDataType;
void Swap(HPDataType* buf1, HPDataType* buf2)
{
	int tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
}
void AdjustUp(HPDataType* dys, int child)
{
	assert(dys);
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (dys[child] > dys[parent])
		{
			Swap(&dys[child], &dys[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdjustDown(HPDataType* dys, int sz, int parent)
{
	assert(dys);
	int child = parent * 2 + 1;
	while (child < sz)
	{
		if (child + 1 < sz && dys[child + 1] > dys[child])
		{
			child++;
		}

		if (dys[child] > dys[parent])
		{
			Swap(&dys[child], &dys[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}