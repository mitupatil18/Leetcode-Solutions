class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* prev = NULL, *curr = head;
        while(curr)
        {
            ListNode *frwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = frwd;
        }
        curr = prev;
        stack<int> st;
        while(curr)
        {
        while(!st.empty() && st.top() <= curr->val) 
         st.pop();
         int nextGreater = st.empty() ? 0 : st.top();
         ans.push_back(nextGreater);
         st.push(curr->val);
         curr = curr->next;  
        }
     reverse(ans.begin(),ans.end());
     return ans; 
    }
};