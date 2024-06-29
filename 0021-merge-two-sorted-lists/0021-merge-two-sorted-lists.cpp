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
        ListNode* a = list1, *b = list2, *head = NULL, *prev = NULL;
        while(a && b)
        {
            if(a->val<b->val)
            {
                if(head==NULL)
                head = prev = a;
                else
                prev->next = a;
                prev = a;
                a = a->next;
            }
            else
            {
                if(head==NULL)
                head = prev = b;
                else
                prev->next = b;
                prev = b;
                b = b->next;
            }
        }
        while(a)
        {
            if(head==NULL)
            head = a;
            else
            prev->next = a;
            prev = a;
            a = a->next;
        }
        while(b)
        {
            if(head==NULL)
            head = b;
            else
            prev->next = b;
            prev = b;
            b = b->next;
        }
        return head;
    }
};