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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> v ;
        ListNode *a = head ;
        while(a)
        {
            v.push_back(a->val);
            a = a->next ;
        }
        sort(v.begin(),v.end());
        a = head;
        int i = 0 ;
        while(a)
        {
            a->val = v[i++];
            a = a->next ;
        }
        return head ;
    }
};