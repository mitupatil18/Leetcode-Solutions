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
        if(head==NULL || k==0) return head;
        int n = 0 ;
        ListNode* a = head;
        while(a)
        {
            n++ ;
            a = a->next ;
        }
        k = k%n;
        if(k==0)
        return head;
        a = head ;
        for(int i = 1 ; i<n-k && a ; i++)
        {
            a = a->next ;
        }
        ListNode* temp;
        if(a->next)
        temp = a->next ;
        ListNode * z = a ;
        while(a->next)
        a = a->next ;
        a->next = head ;
        head = temp ;
        if(z)
        z->next = NULL ;
        return head;
    }
};