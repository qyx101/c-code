#include "queue.h"
int main()
{
	Queue que;
	QueInit(&que);
	QuePush(&que, 1);
	QuePush(&que, 2);
	QuePush(&que, 3);
	QuePush(&que, 4);
	QuePush(&que, 5);
	while (!isQueEmpty(&que))
	{
		printf("%d ", QueFront(&que));
		QuePop(&que);
	}
	QueDestroy(&que);
}