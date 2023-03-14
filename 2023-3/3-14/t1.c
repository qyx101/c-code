/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        struct ListNode* gGuard,*gtail,*lGuard,*ltail;
        gGuard = gtail = (struct ListNode*)malloc(sizeof(struct ListNode));
        lGuard = ltail = (struct ListNode*)malloc(sizeof(struct ListNode));
        lGuard->next = gGuard->next = NULL;
        struct ListNode* cur = head;
        while (cur)
        {
            if (cur->val < x)
            {
                ltail->next = cur;
                ltail = ltail->next;
            }
            else 
            {
                gtail->next = cur;
                gtail = gtail->next;
            }
            cur = cur->next;
        }
        gtail->next = NULL;
        ltail->next = gGuard->next;
        head = lGuard->next;
        free(gGuard);
        free(lGuard);
        return head;
        
    }
};