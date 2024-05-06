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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> s , t ;
        ListNode *a = head , *prev;
        while(a)
        {
            while(!s.empty() && s.top()->val<a->val)
            s.pop();
            s.push(a);
            a = a->next ;
        }
        while(!s.empty())
        {
            t.push(s.top());
            s.pop();
        }
        head = t.top();
        prev = t.top();
        t.pop();
        if(t.size()>0)
        {
            while(t.size()>1)
            {
                prev->next = t.top();
                prev = t.top();
                t.pop();
            }
            prev->next = t.top();
            t.top()->next = NULL ;
        }
        else
        prev->next = NULL;
        return head;
    }
};