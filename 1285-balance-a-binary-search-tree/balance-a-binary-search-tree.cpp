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
        if(a==NULL) return ;
        find(a->left, v);
        v.push_back(a->val);
        find(a->right, v);
    }
    TreeNode* build( int l , int r, vector<int> v)
    {
        if(l>=r)
        return NULL ;
        int mid = (l+r)/2 ;
        TreeNode* x = new TreeNode(v[mid]);
        x->left = build(l,mid,v);
        x->right = build(mid+1,r,v);
        return x;
    }
    TreeNode* balanceBST(TreeNode* root) 
    {
        TreeNode *a = root ;
        vector<int> v ;
        find(a,v);
        return build(0,v.size(),v);
    }
};