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
        vector<int> ans , v ;
        ListNode *a = head->next, *b = head , *c;
        int cnt  = 2, mn = INT_MAX ;
        while(a->next)
        {
            c = a->next ;
            if(a->val>b->val && a->val>c->val || a->val<b->val && a->val<c->val )
            {
                v.push_back(cnt);
            }
            cnt++ ;
            b = a ;
            a = a->next ;
        }
        if(v.empty() || v.size()==1)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else
        {
            for(int k = 0 ; k<v.size()-1 ; k++)
            mn = min(mn,v[k+1]-v[k]);
            ans.push_back(mn);
            if(v.size()>1)
            ans.push_back(v[v.size()-1]-v[0]);
            else 
            ans.push_back(mn);
        }
        return ans;
    }
};