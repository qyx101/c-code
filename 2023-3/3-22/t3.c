/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    // 找到中心节点
    struct ListNode* FindMiddleNode(struct ListNode* phead)
    {
        struct ListNode* slow,*fast;
        slow = fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    struct ListNode* mid = FindMiddleNode(head);
    // 逆置
    struct ListNode* reverseList(struct ListNode* head){
        struct ListNode* cur = head;
        struct ListNode* prev = NULL;
        while (cur)
        {
            struct ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    struct ListNode* rhead = reverseList(mid);

    // 比较
    while (head && rhead)
    {
        if (head->val != rhead->val)
        {
            return false;
        }
        else 
        {
            head = head->next;
            rhead = rhead->next;
        }        
    }
    return true;
    
}