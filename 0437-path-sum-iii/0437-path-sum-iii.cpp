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
    int cnt = 0 ;
    long long sum = 0 ;
    void find(TreeNode* a , int t ){
        if(!a) return ;
        sum += a->val;
        if(sum==t) cnt++ ;
        find(a->left , t );
        find(a->right , t );
        sum -= a->val;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0 ;
        find(root, targetSum);
        pathSum(root->left,targetSum );
        pathSum(root->right,targetSum );
        return cnt;
    }
};