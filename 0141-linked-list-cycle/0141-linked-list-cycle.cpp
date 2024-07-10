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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        return 0;
        if(head->next==NULL)
        return 0;
        ListNode *f = head->next , *s = head;
        while(f)
        {
            if(f==s)
            break;
            f = f->next->next;
            s = s->next;
        }
        while(f!=s)
        {
            f = f->next;
        }
        return f;
    }
};