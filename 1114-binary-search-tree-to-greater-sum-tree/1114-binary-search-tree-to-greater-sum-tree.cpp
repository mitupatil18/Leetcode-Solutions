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
    void find(TreeNode* a, vector<TreeNode*>& v, int& sum)
    {
        if(a==NULL)
        return;
        find(a->left,v,sum);
        sum += a->val;
        v.push_back(a);
        find(a->right,v,sum);
    }
    TreeNode* bstToGst(TreeNode* root) 
    {
        int sum = 0 ;
        vector<TreeNode*> v;
        find(root,v,sum);
        int prev;
        for(int i = 0 ; i<v.size();i++)
        {
            if(i!=0)
            {
                sum -= prev;
                prev = v[i]->val;
                v[i]->val = sum;
            }
            else
            {
                prev = v[0]->val;
                v[0]->val = sum;
            }
            
        }    
        return root;
    }
};