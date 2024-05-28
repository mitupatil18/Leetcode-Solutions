/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        return NULL;
        ListNode *o = head , *e = head->next ;
        ListNode *t = e ;
        while(o && e && o->next && e->next)
        {
            o->next = o->next->next;
            e->next = e->next->next ;
            o = o->next ;
            e = e->next;
        }
        o->next = t;
        return head;
    }
};