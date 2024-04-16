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
    void find(TreeNode *a , int depth, int currd, int val)
    {
        if(a==NULL) return;
        if(depth==currd+1)
        {
            TreeNode * l = new TreeNode(val);
            l->left = a->left;
            TreeNode * r = new TreeNode(val);
            r->right = a->right;
            a->left = l ;
            a->right = r;
            return ;
        }
        find(a->left, depth, currd+1, val);
        find(a->right, depth, currd+1,val);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode * t = new TreeNode(val);
            t->left=root;
            root = t;
        }
        else
        {
            find(root,depth,1,val);
        }
        return root;
    }
};