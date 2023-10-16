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
    TreeNode* find(vector<int>& nums, int l , int r)
    {
        if(l>r)
        return NULL;
        int mid = (l+r)/2 ;
        TreeNode* x = new TreeNode(nums[mid]);
        x->left = find(nums,l,mid-1);
        x->right = find(nums,mid+1,r);
        return x ;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return find(nums,0,nums.size()-1);
    }
};