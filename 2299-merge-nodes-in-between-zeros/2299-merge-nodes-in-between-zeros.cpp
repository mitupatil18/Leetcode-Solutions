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
        ListNode *a = head, *ans = NULL, *prev = NULL;
        while (a) {
            int x = 0;
            while (a && a->val != 0) {
                x += a->val;
                a = a->next;
            }
            if (x > 0) {
                ListNode* z = new ListNode(x);
                if (ans == NULL)
                    ans = z;
                else
                    prev->next = z;
                prev = z;
            }
            a = a->next;
        }
        return ans;
    }
};