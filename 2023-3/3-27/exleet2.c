typedef int STDataType;
typedef struct stack
{
	STDataType* dys; // 存储动态开辟空间地址
	int top; // 栈顶
	int capacity; //  容量
}stack;

// 初始化
void STInit(stack* ps);
// 销毁
void STDestroy(stack* ps);
// 判断栈是否为空
bool isEmpty(stack* ps);
// 入栈
void STPush(stack* ps, STDataType data);
// 出栈
void STPop(stack* ps);
// 返回栈顶元素
STDataType RetTop(stack* ps);

// 初始化
void STInit(stack* ps)
{
	assert(ps);
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * 3);
	if (NULL == tmp)
	{
		perror("malloc");
		return;
	}
	ps->dys = tmp;
	ps->top = -1;
	ps->capacity = 3;
}
// 销毁
void STDestroy(stack* ps)
{
	assert(ps);
	free(ps->dys);
	ps->dys = NULL;
	ps->capacity = 0;
	ps->top = -1;
}

// 入栈
void STPush(stack* ps, STDataType data)
{
	assert(ps);
	ps->top++;
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->dys, sizeof(STDataType)*ps->capacity*2);
		if (NULL == tmp)
		{
			perror("malloc");
			return;
		}
		ps->dys = tmp;
		ps->capacity *= 2;
	}
	ps->dys[ps->top] = data;
}
// true表示栈为空
bool isEmpty(stack* ps)
{
	assert(ps);
	return ps->top == -1;
}
// 出栈
void STPop(stack* ps)
{
	assert(ps);
	assert(!isEmpty(ps));
	ps->top--;
}
// 返回栈顶元素
STDataType RetTop(stack* ps)
{
	assert(ps);
	assert(!isEmpty(ps));
	return ps->dys[ps->top];
}


typedef struct {
    stack pushst;
    stack popst;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    if (NULL == obj)
    {
        perror("malloc fail");
        return;
    }
    STInit(&obj->pushst);
    STInit(&obj->popst);
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    STPush(&obj->pushst,x);
}

int myQueuePop(MyQueue* obj) {
   if (isEmpty(&obj->popst))
    {
        while (!isEmpty(&obj->pushst))
        {
            STPush(&obj->popst, RetTop(&obj->pushst));
            STPop(&obj->pushst);
        }
    }
    int ret = RetTop(&obj->popst);
    STPop(&obj->popst);
    return ret;
}

int myQueuePeek(MyQueue* obj) {
    if (isEmpty(&obj->popst))
    {
        while (!isEmpty(&obj->pushst))
        {
            STPush(&obj->popst, RetTop(&obj->pushst));
            STPop(&obj->pushst);
        }
    }
    return RetTop(&obj->popst);
}

bool myQueueEmpty(MyQueue* obj) {
    return isEmpty(&obj->pushst) && isEmpty(&obj->popst);
}

void myQueueFree(MyQueue* obj) {
    
    STDestroy(&obj->popst);
    STDestroy(&obj->pushst);
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/