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
    ListNode* middleNode(ListNode* head) {
        int cnt = 1 ;
        ListNode* a= head ;
        while(a)
        {
            a = a->next ;
            cnt++;
        }
        a = head;
        ListNode *b = a;
        int n = (cnt/2)+1;
        while(cnt>n)
        {
            a = a->next ;
            cnt--;
            b = a;
        }
        return a;
    }
};