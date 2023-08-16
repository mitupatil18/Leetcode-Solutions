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
    ListNode* reverseList(ListNode* head) {
        stack<int> s ;
        ListNode *a = head ;
        while(a)
        {
            s.push(a->val);
            a = a->next ;
        }
        a = head ;
        while(a)
        {
            a->val = s.top();
            a = a->next ;
            s.pop();
        }
        return head ;
    }
};