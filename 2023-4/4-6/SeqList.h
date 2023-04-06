#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* dys; 
	int capacity; // 容量
	int size; // 数据个数
}SL;

// 初始化
void SLInit(SL* ps);
// 销毁
void SLDestroy(SL* ps);
// 打印
void SLPrint(SL* ps);
// 尾插
void SLPushBack(SL* ps, SLDataType data);
// 尾删
void SLPopBack(SL* ps);
// 头插
void SLPushFront(SL* ps, SLDataType data);
// 头删
void SLPopFront(SL* ps);
// 查找
int SLFind(SL* ps, SLDataType x);
// pos位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x);
// pos位置删除数据
void SLErase(SL* ps, int pos);
