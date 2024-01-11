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
    int ans=0;
    void solve(TreeNode* root,int mini,int maxi){
        if(!root->left && !root->right){
            mini = min(mini,root->val);
            maxi = max(maxi,root->val);
            ans = max(ans,abs(mini-maxi));
            return;
        }
        
        if(root->left){
            ans = max(ans,abs(mini-maxi));
            solve(root->left,min(mini,root->left->val),max(maxi,root->left->val));
        }
        if(root->right){
            ans = max(ans,abs(mini-maxi));
            solve(root->right,min(mini,root->right->val),max(maxi,root->right->val));
        }
    }
    int maxAncestorDiff(TreeNode* root) {
        solve(root,root->val,root->val);
        return ans;
    }
};