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
        vector<int> ans ;
        ListNode * a ;
        if(lists.size()==0)
        return NULL ;
        if(lists.size()==1) 
        return lists[0];
        int cnt = 0 ;
        for(int i = 0 ; i<lists.size() ; i++)
        {
            a = lists[i];
            if(a==NULL)
            cnt++;
            else 
            break;
        }
        if(cnt==lists.size())
        return NULL ;
        for(int i = 0 ; i<lists.size() ; i++)
        {
            a = lists[i];
            while(a)
            {
                ans.push_back(a->val);
                a = a->next;
            }
        }
        sort(ans.begin(), ans.end());
        ListNode *an , *prev = NULL ;
        for(int i = 0 ; i<ans.size() ; i++)
        {
            ListNode *b = new ListNode(ans[i]);
            if(prev==NULL)
            {
                an = b ;
                prev = b ;
            }
            else
            {
                prev->next = b ;
            }
            prev = b ;
        }
        return an ;
    }
};