/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* cur1 = list1, *cur2 = list2;
    struct ListNode* head = NULL, *tail = NULL;
    // 处理一个链表为空的情况
    if (cur1 == NULL)
    {
        head = cur2;
        return head;
    }
    if (cur2 == NULL)
    {
        head = cur1;
        return head;
    }
    while (cur1 && cur2)
    {
        if (cur1->val < cur2->val)
        {
            if (head == NULL)
            {
                head = cur1;
                tail = cur1;
            }
            else 
            {
                tail->next = cur1;
                tail = tail->next;
            }
            cur1 = cur1->next;
        }
        else 
        {
            if (head == NULL)
            {
                head = cur2;
                tail = cur2;
            }
            else 
            {
                tail->next = cur2;
                tail = tail->next;
            }
            cur2 = cur2->next;
        }
    }
    if (tail)
    {
        if (cur2 == NULL)
        {
            tail->next = cur1;
        }
        if (cur1 == NULL)
        {
            tail->next = cur2;
        }
    }
    return head;
}