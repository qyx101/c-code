#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define INIT_CAPACITY 4
#define INC_SZ 2
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable : 4996)

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* pc; // 空间
	int capacity; // 容量
	int sz;	// 个数
}SL;


void SLInit(SL* val);
void SLShow(SL* val);
void SLDestroy(SL* val);
void SLPushBack(SL* val, SLDataType x);
void SLPopBack(SL* val);