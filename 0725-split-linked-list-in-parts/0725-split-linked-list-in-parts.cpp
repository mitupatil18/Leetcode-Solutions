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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans ;
        int cnt = 0 ;
        ListNode *a = head ;
        while(a)
        {
            a = a->next ;
            cnt++ ;
        }
        int r = 0  , n;
        if(cnt/k>0)
        {
            r =  cnt%k ;
            n = cnt/k ;
        }
        else
        n = 1;
        a = head ;
        ListNode *b = head;
        while(r-- && k--)
        {
            int x = 1 ;
            ans.push_back(a);
            while(x<=n+1 && a)
            {
                b = a ;
                a = a->next ;
                x++ ;
            }
            b->next = NULL;
        }
        while(k--)
        {
            if(a==NULL)
            ans.push_back(NULL);
            else
            {
                int x = 1 ;
                ans.push_back(a);
                while(x<=n && a)
                {
                    b = a;
                    a = a->next ;
                    x++ ;
                }
                b->next = NULL ;
            }
        }
        return ans ;
    }
};