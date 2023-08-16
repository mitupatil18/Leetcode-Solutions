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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> v ;
        ListNode *a = head ;
        if(a==NULL) return NULL ;
        while(a)
        {
            v.push_back(a->val);
            a = a->next ;
        }
        a = head ;
        k = k%(v.size());
        int i = v.size()-k ;
        while(a && i<v.size())
        {
            a->val = v[i];
            a = a->next ;
            i++ ;
        }
        i = 0 ;
        while(a )
        {
            a->val = v[i];
            a = a->next ;
            i++ ;
        }
        return head ;
    }
};