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
int ans = INT_MIN;
    void find(TreeNode *a, vector<int>& v )
    {
        if(!a) return ;
        for(auto x:v)
        ans=max(ans,abs(a->val-x));
        v.push_back(a->val);
        find(a->left,v);
        find(a->right,v);
        v.pop_back();
    }
    int maxAncestorDiff(TreeNode* a) {
        if(!a) return INT_MIN ;
        vector<int> v ;
        find(a,v);
        return ans ;
    }
};