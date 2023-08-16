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
         ListNode* a = l1 , *b = l2 , *n = NULL , *prev = NULL;
         int c =  0 , s = 0 ;
         while(a && b )
         {
            s = a->val+b->val+c ;
            c = s/10;
            s = s%10 ;
            ListNode *x = new ListNode(s);
            if(prev==NULL)
            {
                n = x;
                prev = x ;
            }
            else
            {
                prev->next = x ;
                prev = x ;
            }
            a = a->next ;
            b = b->next ;
         }
         while(a)
         {
            s = c+a->val ;
            c = s/10;
            s = s%10 ;
            ListNode *x = new ListNode(s);
            prev->next = x ;
            prev = x ;
            a = a->next ;
         }
         while(b)
         {
            s = c+b->val ;
            c = s/10;
            s = s%10 ;
            ListNode *x = new ListNode(s);
            prev->next = x ;
            prev = x ;
            b = b->next ;
         }
         if(c>0)
         {
             ListNode *x = new ListNode(c);
             prev->next = x ;
         }
         return n ;
    }
};