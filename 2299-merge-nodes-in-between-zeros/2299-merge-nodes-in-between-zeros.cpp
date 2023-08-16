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
    ListNode* mergeNodes(ListNode* head) {
        head = head->next ;
        ListNode* a = head , *b , *prev = NULL ;
        int sum = 0 ;
        while(a)
        {
            if(a->val==0)
            {
                ListNode *x = new ListNode(sum);
                if(prev==NULL)
                {
                    b = x ;
                    prev = x ;
                }
                else
                {
                    prev->next = x ;
                    prev = x ;
                }
                sum = 0 ;
            }
            else
            {
                sum += a->val ;
            }
            a = a->next ;
        }
        return b ;
    }
};