class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both trees are empty, they are same
        if (p == nullptr && q == nullptr)
            return true;
        
        // If one of the trees is empty, they are not same
        if (p == nullptr || q == nullptr)
            return false;
        
        // Check if current nodes are equal
        if (p->val != q->val)
            return false;
        
        // Recursively check left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
