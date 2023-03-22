struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode* Gguard,*Gtail,*Lguard,*Ltail;
    Gguard = Gtail = (struct ListNode*)malloc(sizeof(struct ListNode));
    Lguard = Ltail = (struct ListNode*)malloc(sizeof(struct ListNode));
    Gguard->next = Lguard->next = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        if (cur->val < x)
        {
            Ltail->next = cur;
            Ltail = Ltail->next;
        }
        else
        {
            Gtail->next = cur;
            Gtail = Gtail->next;
        }
        cur = cur->next;
    }
    Gtail->next = NULL;
    Ltail->next = Gguard->next;
    struct ListNode* newhead = Lguard->next;
    free(Lguard);
    free(Gguard);
    return newhead;
}