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
        ListNode *f = head , *s = head;
        while(f && f->next)
        {
            f = f->next->next;
            s = s->next;
            if(f && s && f==s)
            return 1;;
        }
        
        return 0;
    }
};