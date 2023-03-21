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