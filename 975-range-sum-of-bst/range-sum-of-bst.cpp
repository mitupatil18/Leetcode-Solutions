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
    void find(TreeNode* a , int l , int h, int& v)
    {
        if(a==NULL)
        return ;
        if(a->val>=l && a->val<=h)
        v += a->val;
        find(a->left,l,h,v);
        find(a->right,l,h,v);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int v   = 0 ;
        find(root,low,high,v);
        return v;
    }
};