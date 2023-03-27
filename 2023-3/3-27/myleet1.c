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
    Queue q1;
    Queue q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
    if (NULL == obj)
    {
        perror("malloc fail");
        return;
    }
    QueInit(&obj->q1);
    QueInit(&obj->q2);
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    Queue* NoneEmptyQue = &obj->q1;
    Queue* EmptyQue = &obj->q2;
    if (!isQueEmpty(EmptyQue))
    {
        NoneEmptyQue = &obj->q2;
        EmptyQue = &obj->q1;
    }
    QuePush(NoneEmptyQue,x);
}

int myStackPop(MyStack* obj) {
    Queue* NoneEmptyQue = &obj->q1;
    Queue* EmptyQue = &obj->q2;
    if (!isQueEmpty(EmptyQue))
    {
        NoneEmptyQue = &obj->q2;
        EmptyQue = &obj->q1;
    }
    int size = QueSize(NoneEmptyQue);
   while (size > 1)
   {
       QuePush(EmptyQue, RetQueFront(NoneEmptyQue));
       QuePop(NoneEmptyQue);
       size--;
   }
   int top = RetQueFront(NoneEmptyQue);
   QuePop(NoneEmptyQue);
   return top;
}

int myStackTop(MyStack* obj) {
    Queue* NoneEmptyQue = &obj->q1;
    Queue* EmptyQue = &obj->q2;
    if (!isQueEmpty(EmptyQue))
    {
        NoneEmptyQue = &obj->q2;
        EmptyQue = &obj->q1;
    }
    return RetQueBack(NoneEmptyQue);
}

bool myStackEmpty(MyStack* obj) {
    return isQueEmpty(&obj->q1) && isQueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
    QueDestroy(&obj->q1);
    QueDestroy(&obj->q2);
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