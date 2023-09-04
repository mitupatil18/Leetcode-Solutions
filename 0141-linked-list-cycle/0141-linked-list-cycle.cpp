/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> ans ;
        ListNode *a = head ;
        while(a)
        {
            if(ans.find(a)==ans.end())
            ans.insert(a) ;
            else
            return true ;
            a = a->next ;
        }
        return false ;
    }
};