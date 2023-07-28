/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p1, TreeNode* p2) {
        if(root==NULL) return NULL ;
            if(root==p1 || root==p2)
            return root ;
            TreeNode *left = lowestCommonAncestor(root->left,p1,p2);
            TreeNode *right = lowestCommonAncestor(root->right,p1,p2);
            if(left && right)
            return root ;
            else if(left) return left ;
            return right ;
    }
};