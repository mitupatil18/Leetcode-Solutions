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
        ListNode* a = head ;
        stack<int> s ;
        int i = 1 ;
        while(i<left)
        {
            i++ ;
            a = a->next ;
        }  
        ListNode *b = a ;
        while(i<=right)
        {
            s.push(a->val);
            a = a->next ;
            i++ ;
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