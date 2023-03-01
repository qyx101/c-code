#include "SeqList.h"
void test()
{
	SL val;
	SLInit(&val);
	SLPushBack(&val, 1);
	SLPushBack(&val, 2);
	SLPushBack(&val, 3);
	SLPushBack(&val, 4);
	SLPopBack(&val);
	SLPopBack(&val);
	SLPopBack(&val);
	SLPopBack(&val);
	SLPopBack(&val);
	SLShow(&val);
}
int main()
{
	test();
	
}