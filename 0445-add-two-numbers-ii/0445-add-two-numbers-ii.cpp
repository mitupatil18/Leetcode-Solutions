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
        stack<int> s1 , s2, s3 ;
        ListNode* a = l1 ;
        while(a)
        {
            s1.push(a->val);
            a = a->next ;
            
        }
        a = l2 ;
        while(a)
        {
            s2.push(a->val);
            a = a->next ;  
        }
        int c = 0 ;
        while(!s1.empty() && !s2.empty())
        {
            int x = s1.top();
            int y =s2.top();
            int z= (x+y+c)%10 ;
            s3.push(z);
            c = (x+y+c)/10 ;
            s1.pop();
            s2.pop();
        }
        while(!s1.empty())
        {
            int z = (s1.top()+c)%10 ;
            c = (s1.top()+c)/10 ;
            s3.push(z);
            s1.pop();
        }
        while(!s2.empty())
        {
            int z = (s2.top()+c)%10 ;
            c = (s2.top()+c)/10 ;
            s3.push(z);
            s2.pop();
        }
        if(c!=0)
        s3.push(c);
        ListNode *b = NULL , *prev = NULL ;
        while(!s3.empty())
        {
            ListNode* t = new ListNode(s3.top());
            if(prev==NULL)
            {
                prev =t  ;
                b = t ;
            }    
            else
                prev->next = t;  
            prev = t ;
            s3.pop();
        }
        return b ;
    }
};