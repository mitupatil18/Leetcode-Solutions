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
    void find(TreeNode* a , map<int,int>& m , int& mx)
    {
        if(a==NULL)
        return ;
        find(a->left,m,mx);
        m[a->val]++ ;
        mx = max(mx,m[a->val]);
        find(a->right,m,mx);
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int> m ;
        int mx = INT_MIN ;
        find(root,m,mx);
        vector<int> v ;
        for(auto x : m)
        {
            if(x.second==mx)
            v.push_back(x.first);
        }
        return v ;
    }
};