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
    void traverse(TreeNode *a, string s, vector<string>& v)
    {
        if(a==NULL)
        return;
        string z = to_string(a->val);
        s = s+z;
        if(a->left==NULL && a->right==NULL)
        {
            v.push_back(s);
            return ;
        }
       traverse(a->left,s+"->",v);
        traverse(a->right,s+"->",v);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        vector<string> v;
        traverse(root,s,v);
        return v;
    }
};