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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        return NULL ;
        ListNode* a = head, *b = a;
        while(a && a->next)
        {
            b = b->next;
            a = a->next->next;
            if(a && b && a==b)
            break;
        }
        if (!(a && a->next)) return NULL;
        while(head!=b)
        {
            head = head->next;
            b = b->next;
        }
        return head;
    }
};