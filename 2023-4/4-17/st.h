#pragma once
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
void STInit(stack* ps, int capacity = 4); // 缺省参数 capacity