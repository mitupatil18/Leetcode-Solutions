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
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        int cnt = 0 ;
        ListNode *a = head;
        while(a)
        {
            s.push(a);
            a = a->next;
            cnt++;
        }
        if(cnt%2!=0)
        cnt /= 2;
        else
        cnt = cnt/2 -1;
        a = head;
        while(cnt>0)
        {
            ListNode *t1 = a->next;
            a->next = s.top();
            s.top()->next = t1;
            s.pop();
            s.top()->next = NULL;
            a = t1;
            cnt--;
        }
        
    }
};