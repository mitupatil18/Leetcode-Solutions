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
    int ans = 0 ;
    void find(TreeNode* a , unordered_map<int,int>& m )
    {
        if(a==NULL)
        return ;
        m[a->val]++;
        if(a->left==NULL && a->right==NULL)
        {
            int cnt = 0 ;
            for(auto it:m)
            {
                if(it.second%2!=0)
                cnt++ ;
            }
            if(cnt<=1)
            ans++;
            m[a->val]-- ;
            return ;
        }
        find(a->left,m);
        find(a->right,m);
        m[a->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root) return 0;
        unordered_map<int,int>m;
        find(root,m);
        return ans;
    }
};