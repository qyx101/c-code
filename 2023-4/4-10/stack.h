#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

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
void STSize(stack* ps);
// 判空
bool isSTEmpty(stack* ps);

