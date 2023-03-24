/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
    // 1. 在每一个原结点后链接一个拷贝节点
	struct Node* cur = head;
    while (cur)
    {
        struct Node* next = cur->next;
        struct Node* copynode = (struct Node*)malloc(sizeof(struct Node));
        copynode->val = cur->val;
        cur->next = copynode;
        copynode->next = next;
        cur = next;
    }
    // 2. 在每一个拷贝节点的random上链接原节点的next, 保持相同的相对位置
    cur = head;
    while (cur)
    {
        struct Node* copynode = cur->next;
        if (NULL == cur->random)
        {
            copynode->random = NULL;
        }
        else 
        {
            copynode->random = cur->random->next;
        }
        cur = cur->next->next;
    }
    // 3. 把所有的拷贝节点从原链表中拆解下来, 组成一个新链表, 然后还原原链表的链接关系
    cur = head;
    struct Node* copyhead = NULL, *copytail = NULL;
    while (cur)
    {
        struct Node* copynode = cur->next;
        struct Node* next = copynode->next;
        if (NULL == copyhead)
        {
            copyhead = copytail = copynode;
        }
        else 
        {
            copytail->next = copynode;
            copytail = copytail->next;
        }
        cur->next = next;
        cur = next;
    }
    return copyhead;
}