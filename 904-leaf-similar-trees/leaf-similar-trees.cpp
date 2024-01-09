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
    void find(TreeNode* a , vector<int>& v)
    {
        if(a==NULL)
        return ;
        find(a->left,v);
        if(a->left==NULL && a->right==NULL)
        v.push_back(a->val);
        find(a->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a, b ;
        find(root1,a);
        find(root2,b);
        if(a.size()!=b.size())
        return false;
        for(int i = 0 ;i<a.size();i++)
        {
            if(a[i]!=b[i])
            return false;
        }
        return true;
    }
};