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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = l1 , *b = l2, *prev = NULL, *head = NULL;
        int c = 0, sum;
        while(a || b)
        {
            sum = c ;
            if(a)
            sum += a->val;
            if(b)
            sum += b->val;
            c = sum/10;
            sum %= 10;
            ListNode *z = new ListNode(sum);
            if(head==NULL)
            head = z;
            else
            prev->next = z;
            prev = z;
            if(a)
            a = a->next;
            if(b)
            b = b->next;
        }
        if(c!=0)
        {
            ListNode *z = new ListNode(c);
            if(head==NULL)
            head = z;
            else
            prev->next = z;
            prev = z;
        }
        return head;
    }
};