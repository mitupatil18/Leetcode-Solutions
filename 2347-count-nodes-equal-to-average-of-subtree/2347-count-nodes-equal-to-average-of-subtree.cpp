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
class Solution 
{
    public:
        int get_subtree_nodes(TreeNode * root)
        {
            if (root == nullptr)
                return 0;
            else
                return get_subtree_nodes(root->left) + get_subtree_nodes(root->right) + 1;
        }

        int get_subtree_nodes_sum_value(TreeNode * root)
        {
            if (root == nullptr)
                return 0;
            else
                return get_subtree_nodes_sum_value(root->left) + get_subtree_nodes_sum_value(root->right) + root->val;
        }

        int averageOfSubtree(TreeNode * root) 
        {
            if (root == nullptr)
                return 0;
            else
            {
                if ((get_subtree_nodes_sum_value(root) / get_subtree_nodes(root)) == root->val)
                    return averageOfSubtree(root->left) + averageOfSubtree(root->right) + 1;
                else
                    return averageOfSubtree(root->left) + averageOfSubtree(root->right);
            }
        }
};