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
    void find(TreeNode *a , int& ans, int cnt)
    {
        if(a==NULL)
        return ;
        if(a->left)
        find(a->left,ans, cnt+1);
        ans = max(ans,cnt);
        if(a->right)
        find(a->right,ans, cnt+1);
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ans = 0 ;
        find(root,ans,0);
        return ans+1;
    }
};