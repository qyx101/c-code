typedef int STDataType;
typedef struct stack
{
	STDataType* dys;
	int capacity;
	int top;
}stack;

// 初始化
void STInit(stack* ps);
// 销毁
void STDestroy(stack* ps);
// 入栈
void STPush(stack* ps, STDataType data);
// 出栈
void STPop(stack* ps);
// 取栈顶数据
STDataType STTop(stack* ps);
// 计算数据个数
int STSize(stack* ps);
// 判空
bool isSTEmpty(stack* ps);

// 初始化
void STInit(stack* ps)
{
	assert(ps);
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * 3);
	if (NULL == tmp)
	{
		perror("STInit::malloc fail");
		return;
	}
	ps->dys = tmp;
	ps->capacity = 3;
	ps->top = 0;
}
// 销毁
void STDestroy(stack* ps)
{
	assert(ps);
	free(ps->dys);
	ps->dys = NULL;
	ps->capacity = 0;
	ps->top = 0;
}
// 入栈
void STPush(stack* ps, STDataType data)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->dys, sizeof(STDataType) * ps->capacity * 2);
		if (NULL == tmp)
		{
			perror("STPush::realloc fail");
			return;
		}
		ps->dys = tmp;
		ps->capacity *= 2;
	}
	ps->dys[ps->top] = data;
	ps->top++;
}
// 出栈
void STPop(stack* ps)
{
	assert(ps);
	assert(!isSTEmpty(ps));
	ps->top--;
}
// 取栈顶数据
STDataType STTop(stack* ps)
{
	assert(ps);
	assert(!isSTEmpty(ps));
	return ps->dys[ps->top - 1];
}
// 计算数据个数
int STSize(stack* ps)
{
	assert(ps);
	return ps->top;
}
// 判空
bool isSTEmpty(stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

typedef struct {
    stack pushst;
    stack popst;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    STInit(&obj->pushst);
    STInit(&obj->popst);
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    STPush(&obj->pushst, x);
}

int myQueuePop(MyQueue* obj) {
    //  如果popst为空, 就导入数据
    if (isSTEmpty(&obj->popst))
    {
        while (STSize(&obj->pushst))
        {
            STPush(&obj->popst, STTop(&obj->pushst));
            STPop(&obj->pushst);
        }
    }
    int top = STTop(&obj->popst);
    STPop(&obj->popst);
    return top;
}

int myQueuePeek(MyQueue* obj) {
    if (isSTEmpty(&obj->popst))
    {
        while (STSize(&obj->pushst))
        {
            STPush(&obj->popst, STTop(&obj->pushst));
            STPop(&obj->pushst);
        }
    }
    return STTop(&obj->popst);
}

bool myQueueEmpty(MyQueue* obj) {
    return isSTEmpty(&obj->popst) && isSTEmpty(&obj->pushst);
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