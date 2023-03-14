/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* Atail = headA, *Btail = headB;
    struct ListNode* LongList = headA, *ShortList = headB;
    int lenA = 0, lenB = 0;
    // 找尾, 然后分别求两个链表的长度
    while (Atail)
    {
        lenA++;
        Atail = Atail->next;
    }
    while (Btail)
    {
        lenB++;
        Btail = Btail->next;
    }
    // 如果尾节点不同, 则表示不存在相交节点
    if (Atail != Btail)
    {
        return NULL;
    }
    // 存在相交节点, 找相交首节点
    else
    {   int gap = 0;
        // 让长的链表先走长度之差
        if (lenA > lenB)
        {
            gap = lenA - lenB;
            LongList = headA;
            ShortList = headB;
        }
        else 
        {
            gap = lenB - lenA;
            LongList = headB;
            ShortList = headA;
        }
        while (gap--)
        {
            LongList = LongList->next;
        }
        // 然后同时走
        while (LongList != ShortList)
        {
             LongList = LongList->next;
             ShortList = ShortList->next;
        }
        return LongList;
    } 
}