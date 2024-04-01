/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void find(stack<TreeNode*>& s, TreeNode* a )
    {
        if(a==NULL)
        return;
        find(s,a->left);
        s.push(a);
        find(s,a->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        stack<TreeNode*> st;
        find(st,root);
        TreeNode* prev = st.top();
        TreeNode* ans = prev;
        prev->left = prev->right = NULL;
        st.pop();
        while(!st.empty())
        {
            TreeNode * x = st.top();
            x->left = NULL;
            x->right = prev;
            prev = x;
            st.pop();
        }
        return prev;
    }
};