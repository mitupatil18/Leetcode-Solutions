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
        ListNode *a = head, *prev = NULL , *next = NULL;
        while(a)
        {   
            next  = a->next ;
            a->next = prev ;
            prev = a;
            a = next ;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) return head;
        int cnt = 1;
        ListNode *a = head, *prev = head, *prev_head = NULL;
        while(a)
        {
            if(cnt==k)
            {
                ListNode* next = a->next;
                a->next  = NULL;
                ListNode * z = reverse(prev);
                if(prev==head)
                {
                    head = z;
                    prev_head = prev;
                }
                else
                {
                    prev_head->next = z;
                    prev_head = prev;
                }
                prev->next=next;
                cnt = 1;
                a = prev;
                prev = a->next;
            }
            else
            cnt++;
            a = a->next;
        }
        return head;
    }
};