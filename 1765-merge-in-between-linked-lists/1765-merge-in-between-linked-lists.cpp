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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* x = list1 , *y = list1 , *z = list2 ;
        int cnt = 0 ;
        while(x)
        {
            if(cnt==a)
            break;
            y = x ;
            cnt++;
            x = x->next ;
        }
        ListNode *m = y ;
        while(x)
        {
            if(cnt==b)
            break;
            cnt++;
            x = x->next ;
        }
        y->next = list2 ;
        while(z->next)
        {
            z = z->next ;
        }
        z->next = x->next ;
        return list1;
    }
};