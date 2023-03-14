/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode* newhead = NULL, *tail = NULL;
    struct ListNode* phead = head, *prev = head, *cur = head;
    while (cur)
    {
        if (cur->val < x)
        {
            if (tail == NULL)
            {
                newhead = cur;
                tail = cur;
                cur = cur->next;
            }
            else 
            {
                prev->next = cur->next;
                tail->next = cur;
                tail = tail->next;
                cur = cur->next;
            }
        }
        else
        {
           if (phead == NULL)
           {
               phead = cur;
           }
           else
           {
               prev = cur;
               cur = cur->next;
           }
        }
    }
    tail->next = phead;
    return newhead;
}
    