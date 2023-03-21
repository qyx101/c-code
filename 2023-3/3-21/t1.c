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
    struct ListNode* newnode = NULL;
    while (cur)
    {
        if (cur->val != val)
        {
            if (tail == NULL)
            {
                newnode = cur;
                tail = newnode;
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
    if (tail != NULL)
    {
        tail->next = NULL;
    }
    return newnode;
}