/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* ptr1 = list1, *ptr2 = list2;
    struct ListNode* head = NULL, *tail = NULL;
    if (ptr1 == NULL)
    {
        return ptr2;
    }
    if (ptr2 == NULL)
    {
        return ptr1;
    }
    while (ptr1 && ptr2)
    {
        if (ptr1->val < ptr2->val)
        {
            if (NULL == head)
            {
                head = ptr1;
                tail = head;
            }
            else 
            {
                tail->next = ptr1;
                tail = tail->next;
            }
            ptr1 = ptr1->next;
        }
        else
        {
             if (NULL == head)
            {
                head = ptr2;
                tail = head;
            }
            else 
            {
                tail->next = ptr2;
                tail = tail->next;
            }
            ptr2 = ptr2->next;
        }
    }
    if (ptr1)
    {
        tail->next = ptr1;
    }
    if (ptr2)
    {
        tail->next = ptr2;
    }
    return head;
}