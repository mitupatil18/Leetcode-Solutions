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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        int i = 0 ;
        ListNode *a = head->next, *prev = head;
        while(a->next)
        {
            if((a->val>prev->val &&  a->val>a->next->val) ||(a->val<prev->val  && a->val<a->next->val))
            v.push_back(i); 
            prev = a;
            a = a->next;
            i++;
        }
        if(v.size()<2)return {-1,-1} ;
        int mini = INT_MAX, maxi = v[v.size()-1]-v[0];
        for(int i = 0 ; i<v.size()-1;i++)
        {
            mini = min(mini,v[i+1]-v[i]);
        }
        return {mini,maxi};
    }
};