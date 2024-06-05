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
    void find(TreeNode *a  , vector<int>& v)
    {
        if(a==NULL) return ;
        find(a->left,v);
        v.push_back(a->val);
        find(a->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        find(root,v);
        return v[k-1];
    }
};