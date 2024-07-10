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
    int find(TreeNode *a , int& sum)
    {
        if(a==NULL)
        return 0;
        int l = max(0,find(a->left,sum));
        int r = max(0,find(a->right,sum));
        sum = max(l+r+a->val,sum);
        return max(l,r)+a->val;
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL)
        return 0;
        int sum = INT_MIN;
        find(root,sum);
        return sum;
    }
};