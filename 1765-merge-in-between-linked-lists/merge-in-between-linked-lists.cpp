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
    ListNode* mergeInBetween(ListNode* list1, int x, int y, ListNode* list2) {
        int c = 1 ;
        ListNode *a = list1 , *b=list2;
        while(c<x)
        {
            a = a->next;
            c++ ;
        }
        ListNode * temp1 = a;
        while(c<=y+1)
        {
            a = a->next ;
            c++;
        }
        ListNode * temp2 = a;
        temp1->next = list2;
        while(b->next)
        b = b->next;
        b->next = temp2;
        return list1;
    }
};