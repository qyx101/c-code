#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define INIT_SZ 3
#define INC_SZ 2
typedef int SLDataType;
// 声明顺序表结构
typedef struct SeqList
{

	SLDataType* pc; // 指向动态开辟的空间
	int sz;	// 记数据个数
	int capacity;	// 记容量
}SL;

// 初始化
void SLInit(SL* ps);
// 销毁
void SLDestroy(SL* ps);
// 显示
void SLPrint(SL* ps);
// 增容
void SLCheck(SL* ps);
// 尾插数据
void SLPushBack(SL* ps, SLDataType x);
// 尾删数据
void SLPopBack(SL* ps);
// 头插数据
void SLPushFront(SL* ps, SLDataType x);
// 头删数据
void SLPopFront(SL* ps);
// 查找
int SLFind(SL* ps, SLDataType x);
// 在pos位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x);
// 删除pos位置的数据
void SLErase(SL* ps, int pos);
