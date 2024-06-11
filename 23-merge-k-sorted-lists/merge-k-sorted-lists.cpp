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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        return NULL;
        ListNode *head = lists[0], *prev = NULL;
        for(int i = 0 ; i<lists.size();i++)
        {
            if(head==NULL)
            {
                head = lists[i];
            }
            if(prev!=NULL)
            {
                prev->next = lists[i];
            }
            ListNode* a = lists[i];
            while(a && a->next)
            a = a->next;
            if(a)
            prev = a;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        ListNode *a = head;
        while(a)
        {
            pq.push(a->val);
            a = a->next;
        }
        a = head;
        while(!pq.empty())
        {
            a->val = pq.top();
            pq.pop();
            a = a->next;
        }
        return head;
    }
};