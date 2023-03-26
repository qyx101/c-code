#include "Queue.h"

int main()
{
	Queue pq;
	QueInit(&pq);
	QuePush(&pq,1);
	//printf("%d ", RetQueFront(&pq));
	QuePush(&pq, 2);
	QuePush(&pq, 3);
	QuePush(&pq, 4);
	QuePush(&pq, 5);
	while (!isQueEmpty(&pq))
	{
		printf("%d ", RetQueFront(&pq));
		QuePop(&pq);
	}
	printf("\n");
	QueDestroy(&pq);
}