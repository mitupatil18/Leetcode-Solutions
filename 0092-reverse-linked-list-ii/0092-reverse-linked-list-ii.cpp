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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *a = head , *b = NULL , *c ;
        int cnt = 1 ;
        stack<int> s;
        while(a)
        {
            if(cnt==left)
            b = a;
            if(b!=NULL)
            s.push(a->val);
            if(cnt==right)
            {
                break ; 
            }
            cnt++;
            a = a->next ;
        }
        a = b ;
        while(!s.empty())
        {
            a->val = s.top();
            s.pop();
            a = a->next ;
        }
        return head ;
    }
};