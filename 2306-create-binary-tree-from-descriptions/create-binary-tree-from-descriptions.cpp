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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        map<int,TreeNode*> m;
        set<TreeNode*> s;
        TreeNode *head = NULL;
        for(int i = 0 ; i<d.size();i++)
        {
            TreeNode *root , *node ;
            if(m.find(d[i][0])==m.end())
            {
                TreeNode *newbr = new TreeNode(d[i][0]);
                m[d[i][0]] = newbr;
                root = newbr;
            }
            else
            root = m[d[i][0]];
            if(m.find(d[i][1])==m.end())
            {
                TreeNode *newbr = new TreeNode(d[i][1]);
                m[d[i][1]] = newbr;
                node = newbr;
                s.insert(newbr);
            }
            else
            {
                node = m[d[i][1]];
                s.insert(node);
            }
            if(d[i][2]==1)
            {
                root->left = node;
            }
            else
            root->right = node;
        }
        for(auto x : m)
        {
            if(s.find(x.second)==s.end())
            return x.second;
        }
        return NULL;
    }
};