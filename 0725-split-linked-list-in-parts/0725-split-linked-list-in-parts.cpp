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
        ListNode * a = head ;
        vector<ListNode*> ans ;
        int n = 0 ;
        while(a)
        {
            n++ ;
            a = a->next ;
        }
        int q = n/k , r = n%k , x = 0 ;
        a = head ;
        ListNode *b ;
        while(a)
        {
            ans.push_back(a);
            int i = 0 ;
            if(r>0)
            {
                x = q+1 ;
                r-- ;
            }
            else
            x = q ;
            while(i<x)
            {
                b = a ;
                a = a->next ;
                i++ ;
            }        
            b->next = NULL ;
        }

        while(k>n)
        {
            ans.push_back(NULL);
            k-- ;
        }
        return ans;
    }
};