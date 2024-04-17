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
    void find(TreeNode *a , string s , vector<string>& v)
    {
        if(a==NULL)
        return ;
        if(a->left==NULL && a->right==NULL)
        {
            s.push_back((char)a->val+97);
            string z = s;
            reverse(z.begin(),z.end());
            v.push_back(z);
            return ;
        }
        s.push_back((char)a->val+97);
        find(a->left,s,v);
        find(a->right,s,v);
        s.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
        string s = "" ;
        vector<string> v;
        find(root,s,v);
        sort(v.begin(),v.end());
        return v[0];
    }
};