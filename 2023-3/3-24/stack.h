#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int STDataType;
typedef struct stack
{
	STDataType* st;
	int top; // 栈顶
	int capacity;
}stack;

// 栈初始化
void STInit(stack* pst);
// 栈销毁
void STDestroy(stack* pst);
// 入栈
void STPush(stack* pst, STDataType data);
// 出栈
void STPop(stack* pst);
// 判断栈是否为空
bool isEmpty(stack* pst);
// 计算栈中元素个数
int STSize(stack* pst);
// 获取栈顶元素
STDataType STTop(stack* pst);