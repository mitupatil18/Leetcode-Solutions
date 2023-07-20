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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL ;
        vector<int> v ;
        ListNode *a = list1 , *b = NULL , *ans = list1;
        while(a)
        {
            b = a ;
            v.push_back(a->val);
            a = a->next ;
        }
        if(b!=NULL)
        b->next = list2 ;
        else
        ans = list2 ;
        a = list2 ;
        while(a)
        {
            v.push_back(a->val);
            a = a->next ;
        }
        sort(v.begin(),v.end());
        a = ans ;
        int i = 0 ;
        while(a)
        {
            a->val = v[i];
            i++;
            a = a->next;
        }
        return ans ;
    }
};