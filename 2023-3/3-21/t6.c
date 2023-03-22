struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* ptr1 = list1, *ptr2 = list2;
    struct ListNode* guard = NULL, *tail = NULL;
    guard = tail =  (struct ListNode*)malloc(sizeof(struct ListNode));
    tail->next = NULL;
    while (ptr1 && ptr2)
    {
        if (ptr1->val < ptr2->val)
        {
            tail->next = ptr1;
            ptr1 = ptr1->next;
            tail = tail->next;
        }
        else
        {
            tail->next = ptr2;
            tail = tail->next;
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
    struct ListNode* head = guard->next; 
    free(guard);
    return head;
}