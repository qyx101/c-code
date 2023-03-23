#include "LT.h"
// 新建节点
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (NULL == newnode)
	{
		perror("BuyListNode::malloc");
		return;
	}
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	return newnode;
}
// 初始化
ListNode* LTInit()
{
	ListNode* guard = BuyListNode(-1);
	guard->prev = guard;
	guard->next = guard;
	return guard;
}
// 销毁
void LTDestroy(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}
// 尾插
void LTPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* newnode = BuyListNode(x);
	ListNode* tail = phead->prev;

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}
// 打印
void LTPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	printf("HEAD <-> ");
	while (cur != phead)
	{
		printf("%d <-> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
// 判断链表是否为空
bool isEmpty(ListNode* phead)
{
	assert(phead);
	return phead == phead->next;
}
// 尾删
void LTPopBack(ListNode* phead)
{
	assert(phead);

	// 判断链表是否为空
	assert(!isEmpty(phead));
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;

	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
	tail = NULL;
}
// 头插
void LTPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* newnode = BuyListNode(x);
	ListNode* next = phead->next;

	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = next;
	next->prev = newnode;
}
// 头删
void LTPopFront(ListNode* phead)
{
	assert(phead);
	assert(!isEmpty(phead));

	ListNode* first = phead->next;
	ListNode* next = first->next;

	phead->next = next;
	next->prev = phead;
	free(first);
	first = NULL;
}
// 查找
ListNode* LTFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
// pos之前插入
void LTInsertFront(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newnode = BuyListNode(x);
	ListNode* prevPos = pos->prev;
	prevPos->next = newnode;
	newnode->prev = prevPos;
	newnode->next = pos;
}
// pos之后插入
void LTInsertBack(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newnode = BuyListNode(x);
	ListNode* next = pos->next;
	pos->next = newnode;
	newnode->prev = pos;
	newnode->next = next;
	next->prev = newnode;
}
// pos位置删除
void LTErace(ListNode* phead, ListNode* pos)
{
	assert(!isEmpty(phead));
	assert(pos);
	ListNode* FrontPos = pos->prev;
	ListNode* AfterPos = pos->next;
	FrontPos->next = AfterPos;
	AfterPos->prev = FrontPos;
	free(pos);
}

