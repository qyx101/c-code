#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#define INIT_SZ 4
#define INC_SZ 2

typedef int STDatatype;
typedef struct stack
{
	STDatatype* st;
	int top;
	int capacity;
}stack;

// 初始化栈
void STInit(stack* ps);
// 栈销毁
void STDestroy(stack* ps);
// 判断是否为空
bool isEmpty(stack* ps);
// 进栈
void STPush(stack* ps, STDatatype data);
// 出栈
void STPop(stack* ps);
// 获取栈顶元素
STDatatype STTop(stack* ps);
