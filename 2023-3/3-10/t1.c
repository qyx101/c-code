/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* cur = head;
    struct ListNode* prev = NULL;
    while (cur)
    {
        if (cur->val != val)
        {
            prev = cur;
            cur = cur->next;
        }
        else 
        {
            if (cur == head)
            {   
                head = cur->next;
                free(cur);
                cur = head;
            }
            else
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
        }
    }
    return head;
}