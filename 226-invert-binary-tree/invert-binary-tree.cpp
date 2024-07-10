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
    void find(TreeNode* a)
    {
        if(a==NULL)
        return ;
        find(a->left);
        find(a->right);
        swap(a->left,a->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        find(root);
        return root;
    }
};