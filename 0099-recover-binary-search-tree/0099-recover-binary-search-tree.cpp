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
    void inorder(TreeNode *a, vector<int>& v )
    {
        if(a==NULL) return ;
        inorder(a->left, v);
        v.push_back(a->val);
        inorder(a->right, v);
    }
    void inorder1(TreeNode *a, vector<int>& v , int& i )
    {
        if(a==NULL) return ;
        inorder1(a->left, v , i);
        a->val = v[i++] ;
        inorder1(a->right, v , i);
    }
    void recoverTree(TreeNode* root) 
    {
        vector<int> v ;
        inorder(root, v);
        sort(v.begin(),v.end());
        int i = 0 ;
        inorder1(root, v , i);
    }
};