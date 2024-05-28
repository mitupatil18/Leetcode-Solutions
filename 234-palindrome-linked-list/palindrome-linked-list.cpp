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
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL) return NULL ;
        ListNode *a = head , *prev = NULL , *next = NULL;
        while(a)
        {
            next = a->next ;
            a->next = prev ;
            prev = a;
            a = next ;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        int cnt = 0 ;
        ListNode *a = head ;
        while(a)
        {
            cnt++;
            a = a->next ;
        }
        a = head;
        int n = cnt/2, i = 0 ;
        while(a && i<n)
        {
            a = a->next ;
            i+=1;
        }
        ListNode *b = reverse(a);
        a = head;
        while(a && b)
        {
            if(a->val!=b->val)
            return 0 ;
            a = a->next ;
            b = b->next ;
        }
        return 1;
    }
};