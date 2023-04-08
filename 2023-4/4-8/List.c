#include "List.h"
// 创建节点
ListNode* BuyListNode(LTDataType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	if (NULL == node)
	{
		perror("BuyListNode::malloc fail");
		return;
	}
	node->prev = node->next = NULL;
	node->data = x;
	return node;
}
// 初始化
ListNode* LTInit()
{
	ListNode* Guard = BuyListNode(-1);
	Guard->prev = Guard->next = Guard;
	Guard->data = -1;
	return Guard;
}
// 打印
void LTPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	printf("GUARD <-> ");
	while (cur != phead)
	{
		printf("%d <-> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
// 尾插
void LTPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* newnode = BuyListNode(x);
	ListNode* tail = phead->prev;

	phead->prev = newnode;
	tail->next = newnode;
	newnode->next = phead;
	newnode->prev = tail;
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
// 判断链表是否为空
bool isLTEmpty(ListNode* phead)
{
	assert(phead);
	return phead->next == phead;
}
// 尾删
void LTPopBack(ListNode* phead)
{
	assert(phead);
	assert(!isLTEmpty(phead));
	ListNode* tail = phead->prev, *Pretail = tail->prev;

	Pretail->next = tail->next;
	phead->prev = Pretail;
	free(tail);
}
// 头删
void LTPopFront(ListNode* phead)
{
	assert(phead);
	assert(!isLTEmpty(phead));
	ListNode* first = phead->next, * next = first->next;

	phead->next = next;
	next->prev = phead;
	free(first);
	
}
// 查找
ListNode* LTFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (x == cur->data)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
// pos之前插入
void LTInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newnode = BuyListNode(x);
	ListNode* Prevpos = pos->prev;

	Prevpos->next = newnode;
	newnode->prev = Prevpos;
	newnode->next = pos;
	pos->prev = newnode;
}
// pos位置删除
void LTErace(ListNode* pos)
{
	assert(pos);
	ListNode* next = pos->next, * prev = pos->prev;
	prev->next = next;
	next->prev = prev;
	free(pos);
}
void LTDestroy(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->prev;
	while (cur != phead)
	{
		ListNode* prev = cur->prev;
		free(cur);
		cur = prev;
	}
	free(phead);
}