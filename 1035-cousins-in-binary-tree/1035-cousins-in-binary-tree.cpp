class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size(), idx = INT_MAX, idy = INT_MAX;
            for(int i = 0; i < n; i++)
            {
                TreeNode *root = q.front();
                q.pop();
                if(!root) continue;
                if(root->val == x)
                {
                    idx = i;
                }
                else if(root->val == y)
                {
                    idy = i;
                }
                q.push(root->left);
                q.push(root->right);
            }
            if(idx != INT_MAX && idy != INT_MAX)
            {
                if(idx % 2 == idy % 2 || abs(idx-idy) > 1)
                {
                    return true;
                }
                else
                {
                    int a = min(idx,idy);
                    int b = max(idx,idy);
                    if(a % 2 == 1 && b % 2 == 0)
                    return true;
                }
            }
        }
        return false;
    }
};