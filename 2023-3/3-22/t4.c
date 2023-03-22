/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* tailA = headA, *tailB = headB;
    int lenA = 0, lenB = 0;
    // 分别计算出链表A，B的长度
    while (tailA)
    {
        lenA++;
        tailA = tailA->next;
    }
    while (tailB)
    {
        lenB++;
        tailB = tailB->next;
    }
    // 如果尾节点不同表示链表不相交
    if (tailA != tailB)
        return NULL;
    // 链表相交, 找起始节点
    struct ListNode* longList = headA, *shortList = headB;
    int gap = 0;
    if (lenA > lenB)
    {   
        longList = headA;
        shortList = headB;
        gap = lenA - lenB;
    }
    if (lenA < lenB)
    {
        longList = headB;
        shortList = headA;
        gap = lenB - lenA;
    }
    // 让长链表先走差距步
    while (gap--)
    {
        longList = longList->next;
    }
    // 然后同时走, 进而判断相交节点
    while (longList != shortList)
    {
        longList = longList->next;
        shortList = shortList->next;
    }
    return longList;
}