/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* cur = head;
    struct ListNode* tail = NULL;
    struct ListNode* newhead = NULL;
    while (cur)
    {
        if (cur->val != val)
        {
            // 尾插
            if (tail == NULL)
            {
                tail = cur;
                newhead = cur;
            }
            else 
            {
                tail->next = cur;
                tail = tail->next;             
            }
            cur = cur->next;     
        }
        else 
        {
            struct ListNode* next = cur->next;
            free(cur);
            cur = next;
        }
      
    }
    if (tail)
    {
        tail->next = NULL;
    }
    return newhead;
}