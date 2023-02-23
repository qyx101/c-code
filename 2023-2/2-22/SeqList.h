#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define NUM 10
#define INIT_CAPACITY 4
typedef int SLDataType;
// 静态顺序表
//struct StaSeqList
//{
//	SLDateType data[NUM];
//	int sz;
//};

// 动态顺序表
typedef struct DynSeqList
{         
	SLDataType* pc; 
	int capacity;
	int sz;                  
}DSL;

void SLInit(DSL* s);
void SLDestroy(DSL* s);
void SLPushBack(DSL* ps, SLDataType x);// 尾加
void SLPopBack(DSL* ps); // 尾删
void SLPushFront(DSL* ps, SLDataType x);
void SLPopFront(DSL* ps);
void Print(DSL* s);