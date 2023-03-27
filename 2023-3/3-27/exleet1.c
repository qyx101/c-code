typedef int QueDataType;
typedef struct Node
{
	QueDataType data;
	struct Node* next;
}Node;

typedef struct Queue
{
	Node* head;
	Node* tail;
	int size;
}Queue;

// 初始化队列
void QueInit(Queue* pq);
// 销毁队列
void QueDestroy(Queue* pq);
// 入队
void QuePush(Queue* pq, QueDataType x);
// 判断队列是否为空
bool isQueEmpty(Queue* pq);
// 出队
void QuePop(Queue* pq);
// 获取队头元素
QueDataType RetQueFront(Queue* pq);
// 获取队尾元素
QueDataType RetQueBack(Queue* pq);

// 初始化队列
void QueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
	pq->size = 0;
}
// 销毁队列
void QueDestroy(Queue* pq)
{
	assert(pq);
	Node* cur = pq->head;
	while (cur)
	{
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}
// 入队
void QuePush(Queue* pq, QueDataType x)
{
	assert(pq);
	Node* newnode = (Node*)malloc(sizeof(Node));
	if (NULL == newnode)
	{
		perror("malloc fail");
		return;
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		if (pq->tail == NULL)
		{
			pq->head = pq->tail = newnode;
		}
		else
		{
			pq->tail->next = newnode;
			pq->tail = newnode;
		}
	}
	pq->size++;
}
// 判断队列是否为空
bool isQueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}
// 出队
void QuePop(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		Node* first = pq->head;
		Node* next = pq->head->next;
		free(first);
		pq->head = next;
	}
	pq->size--;
}
// 获取队头元素
QueDataType RetQueFront(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	return pq->head->data;
}
// 获取队尾元素
QueDataType RetQueBack(Queue* pq)
{
	assert(pq);
	assert(!isQueEmpty(pq));
	return pq->tail->data;
}
// 获取队列元素个数
int QueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}

typedef struct {
    Queue que1;
    Queue que2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
    if (NULL == pst)
    {
        perror("malloc fail");
        return;
    }
    QueInit(&pst->que1);
    QueInit(&pst->que2);
    return pst;
}

void myStackPush(MyStack* obj, int x) {
    if (!isQueEmpty(&obj->que1))
    {
        QuePush(&obj->que1,x);
    }
    else
    {
        QuePush(&obj->que2,x);
    }
}

int myStackPop(MyStack* obj) {
    Queue* EmptyQue = &obj->que1;
    Queue* NoneEmptyQue = &obj->que2;
    if (!isQueEmpty(&obj->que1))
    {
        EmptyQue = &obj->que2;
        NoneEmptyQue = &obj->que1;
    }
    while (QueSize(NoneEmptyQue) > 1)
    {
        QuePush(EmptyQue,RetQueFront(NoneEmptyQue));
        QuePop(NoneEmptyQue);
    }
    int top = RetQueFront(NoneEmptyQue);
    QuePop(NoneEmptyQue);
    return top;
}

int myStackTop(MyStack* obj) {
    if (!isQueEmpty(&obj->que1))
    {
        return RetQueBack(&obj->que1);
    }
    else 
    {
        return RetQueBack(&obj->que2);
    }
}

bool myStackEmpty(MyStack* obj) {
    return isQueEmpty(&obj->que1) && isQueEmpty(&obj->que2);
}

void myStackFree(MyStack* obj) {
    if (!isQueEmpty(&obj->que1))
    {
       QueDestroy(&obj->que1);
    }
    else 
    {
        QueDestroy(&obj->que2);
    }
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/