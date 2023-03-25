typedef char STDataType;
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

bool isValid(char * s){
    stack st;
    STInit(&st);
    while (*s)
    {
        if (*s == '(' || *s == '[' || *s == '{')
        {
            STPush(&st,*s);
            s++;
        }
        else
        {
            if (isEmpty(&st))
            {
                STDestroy(&st);
                return false;
            }
            // 获取栈顶元素，匹配
            STDataType top = RetTop(&st);
            STPop(&st);
            if ((*s == ')' && top != '(')
            || (*s == ']' && top != '[')
            || (*s == '}' && top != '{'))
            {
                STDestroy(&st);
                return false;
            }
            else
            {
                s++;
            }
        }
    }
    if (isEmpty(&st))
    {
        return true;
    }
    else
    {
        STDestroy(&st);
        return false;
    }
}