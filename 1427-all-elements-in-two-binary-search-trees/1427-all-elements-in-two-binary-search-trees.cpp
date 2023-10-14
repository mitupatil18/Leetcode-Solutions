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
    void find(TreeNode *a , vector<int>& ans)
    {
        if(a==NULL)
        return ;
        find(a->left,ans);
        ans.push_back(a->val);
        find(a->right,ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> ans ;
        find(root1,ans);
        find(root2,ans);
        sort(ans.begin(),ans.end());
        return ans ;
    }
};