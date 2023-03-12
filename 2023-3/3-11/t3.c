struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* newhead = NULL;
    struct ListNode* tail = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        if (tail == NULL)
        {
            newhead = cur;
            struct ListNode* next = newhead->next;
            newhead->next = NULL;
            tail = newhead;
            cur = next;
        }
        else
        {
            newhead = cur;
            struct ListNode* next = newhead->next;
            newhead->next = tail;
            tail = newhead;
            cur = next;
        }
    }
    return newhead;
}