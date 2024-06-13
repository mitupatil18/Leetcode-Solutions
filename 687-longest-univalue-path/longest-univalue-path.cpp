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
    int find(TreeNode * node, int& ans)
    {
        if(node==NULL)
        return 0;
        int left = find(node->left, ans);
        int right = find(node->right, ans);
        int lp = 0, rp = 0;
        if (node->left != NULL && node->left->val == node->val) {
            lp = left + 1;
        }
        if (node->right != NULL && node->right->val == node->val) {
            rp = right + 1;
        }
        ans = max(ans, lp + rp);
        return max(lp, rp);
    }
    int longestUnivaluePath(TreeNode* root) {
        if(root==NULL)
        return 0;
        int ans = 0 ;
        find(root,ans);
        return ans;
        
    }
};