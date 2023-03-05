#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define INIT_CAPACITY 3

typedef int SLDataType;
// 声明 循序表结构
typedef struct SeqList
{
	SLDataType* ps; // 指向空间
	int capacity;	// 容量
	int sz;		// 记录个数
}SL;


// 初始化
void SLInit(SL* s1);
// 销毁
void SLDestroy(SL* s1);
// 显示
void SLShow(SL* s1);
// 增容
void SLCheck(SL* s1);
// 尾插数据
void SLPushBack(SL* s1, SLDataType x);
// 尾删数据
void SLPopBack(SL* s1);
// 头插数据
void SLPushFront(SL* s1, SLDataType x);
// 头删数据
void SLPopFront(SL* s1);
// 某个位置插入数据
void SLInsert(SL* s1, int pos, SLDataType x);
// 某个位置删除数据
void SLErase(SL* s1, int pos);
// 查找
void SLFind(SL* s1, SLDataType x);

