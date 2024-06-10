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
    TreeNode* find(vector<int>& preorder, vector<int>& inorder, int st, int end, int& index)
    {
        if(st>end)
        return NULL;
        int rootVal = preorder[index];
        int i = st;
        while(i<=end)
        {
            if(inorder[i]==rootVal)
            break;
            i++;
        }
        index++;
        TreeNode* root = new TreeNode(rootVal);

        root->left = find(preorder, inorder, st, i-1, index);
        root->right = find(preorder, inorder, i+1, end, index);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int index = 0 ;
        return find(preorder,inorder,0,n-1,index);
    }
};