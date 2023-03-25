#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

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



