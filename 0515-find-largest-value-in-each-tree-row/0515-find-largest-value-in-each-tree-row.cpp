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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)
        return {} ;
        vector<int> ans ;
        queue<TreeNode*> q ;
        q.push(root) ;
        while(!q.empty())
        {
            int size = q.size() ;
            int mx = INT_MIN ;
            for(int i = 0 ; i<size ; i++)
            {
                TreeNode *a = q.front() ;
                q.pop() ;
                if(a->left)
                q.push(a->left);
                if(a->right)
                q.push(a->right);
                mx = max(mx,a->val);
            }
            ans.push_back(mx) ;
        }   
        return ans ;
    }
};