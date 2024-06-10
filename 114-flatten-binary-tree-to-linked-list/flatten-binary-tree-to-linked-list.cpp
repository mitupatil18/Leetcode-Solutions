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
    void flatten(TreeNode* root) {
        TreeNode *a = root;
        while(a)
        {
            if(a->left)
            {
                TreeNode* pre = a->left;
                while(pre->right)
                pre = pre->right;
                pre->right = a->right;
                a->right = a->left;
                a->left = NULL;
            }
            a = a->right;
        }
        
    }
};