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
        vector<int> v;
        ListNode * ans = NULL; 
        for(auto x : lists)
        {
            if(x!=NULL && ans==NULL)
            ans = x;
            while(x)
            {
                v.push_back(x->val);
                x = x->next;
            }
        }
        sort(v.begin(),v.end());
        int i = 0 ;
        ListNode* prev = NULL;
        for(int j = 0 ; j<lists.size();j++)
        {
            ListNode* x = lists[j], *y = NULL;
            if(x==NULL) continue;
            while(x)
            {
                x->val = v[i];
                i++;
                y = x;
                x = x->next;
            }
            if(prev!=NULL)
            prev->next = lists[j];
            prev = y;
        }
        return ans;
    }
};