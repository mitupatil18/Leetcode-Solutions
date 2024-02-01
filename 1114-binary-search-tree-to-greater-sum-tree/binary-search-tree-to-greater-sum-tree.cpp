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
    void find(TreeNode *a , vector<TreeNode*>& v , int& s, vector<int>& x)
    {
        if(a==NULL)
        return ;
        find(a->left,v, s,x);
        s += a->val;
        v.push_back(a);
        x.push_back(a->val);
        find(a->right,v,s,x);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<TreeNode*> v ;
        vector<int> x ;
        int sum = 0 ;
        find(root,v,sum, x);
        v[0]->val = sum ;
        for(int i = 1 ; i<v.size() ; i++)
        {
            v[i]->val = sum-x[i-1];
            sum -= x[i-1];
        }
        return root;
    }
};