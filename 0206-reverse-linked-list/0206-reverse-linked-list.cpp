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
    ListNode* reverseList(ListNode* head) {
        ListNode *a = head, *prev = NULL,*next = NULL;
        while(a)
        {
            next = a->next;
            a->next = prev;
            prev = a;
            a = next;
        }
        return prev;
    }
};