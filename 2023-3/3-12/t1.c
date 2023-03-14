/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* getKthFromEnd(struct ListNode* head, int k){
if (head == NULL)
    {
        return NULL;
    }
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    // fast 先走k-1步
    while (k-1)
    {
        if (fast == NULL)
        {
            return NULL;
        }
        fast = fast->next;
        k--;
    }
    // 同时走
    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}