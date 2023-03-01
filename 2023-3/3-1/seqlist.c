#include "SeqList.h"
// 初始化
void SLInit(SL* val)
{
	SLDataType* tmp = (SLDataType*)malloc(sizeof(SLDataType) * INIT_CAPACITY);
	if (NULL == tmp)
	{
		perror("Init::");
		return;
	}
	val->pc = tmp;
	val->sz = 0;
	val->capacity = INIT_CAPACITY;

}
// 销毁
void SLDestroy(SL* val)
{
	free(val->pc);
	val->pc = NULL;
	val->capacity = 0;
	val->sz = 0;
}
// 显示
void SLShow(SL* val)
{
	int i = 0;
	for (i = 0; i < val->sz; i++)
	{
		printf("%d ", val->pc[i]);
	}
	printf("\n");
}
void Check(SL* val)
{
	if (val->sz == val->capacity)
	{
		// 扩容
		SLDataType* tmp = (SLDataType*)realloc(val->pc, sizeof(SLDataType) * val->capacity * INC_SZ);
		if (NULL == tmp)
		{
			perror("realloc::");
			return;
		}
		val->pc = tmp;
		val->capacity* INC_SZ;
	}
}
// 尾插
void SLPushBack(SL* val, SLDataType x)
{
	// 检查容量
	Check(val);
	val->pc[val->sz] = x;
	val->sz++;
}
// 尾删
void SLPopBack(SL* val)
{
	assert(val->sz > 0);
	val->sz--;
}
// 头插
// 头删
