typedef char STDataType;
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

bool isValid(char * s){
    stack st;
    STInit(&st);
    while (*s)
    {
        // 如果是左括号入栈
        if (*s == '(' || *s == '[' | *s == '{')
        {
            STPush(&st, *s);
            s++;
        }
        // 如果是右括号，左括号出栈 与右括号匹配
        else
        {
            if (isSTEmpty(&st))
            {
                STDestroy(&st);
                return false;
            }
            char top = STTop(&st);
            STPop(&st);
            if (*s == ')' && top != '('
            || *s == ']' && top != '['
            || *s == '}' && top != '{')
            {
                STDestroy(&st);
                return false;
            }
            s++;
        }
    }
    bool ret = isSTEmpty(&st);
    STDestroy(&st);
    return ret;
}