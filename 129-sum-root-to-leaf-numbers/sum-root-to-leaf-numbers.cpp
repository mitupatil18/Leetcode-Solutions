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
    void summ(TreeNode * a , int sum, int& ans)
    {
        if(a==NULL) return ;
        if(a && a->left==NULL && a->right==NULL)
        {
            sum = sum*10+a->val;
            ans += sum ;
            cout<<sum<<endl;
            return ;
        }
        
        sum = sum*10+a->val;
        summ(a->left,sum,ans);
        summ(a->right,sum,ans);
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0 ;
        summ(root,0,ans);
        return ans;
    }
};