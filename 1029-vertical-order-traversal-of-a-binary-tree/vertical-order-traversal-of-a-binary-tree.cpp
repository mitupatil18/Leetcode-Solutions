/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void find(map<int, priority_queue<pair<int, int>, vector<pair<int, int>>,
                                      greater<pair<int, int>>>>& m,
              TreeNode* a, int l, int r) {
        if (a == NULL)
            return;
        find(m, a->left, l + 1, r - 1);
        find(m, a->right, l + 1, r + 1);
        m[r].push({l, a->val});
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if (root == NULL)
        return {};
        vector<vector<int>> res;
        int l = 0, r = 0;
        map<int, priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int, int>>>>m;
        find(m, root, l, r);
        for (auto& entry : m) {
            auto pq = entry.second;
            vector<int> v;
            while (!pq.empty()) {
                v.push_back(pq.top().second);
                pq.pop();
            }
            res.push_back(v);
        }
        return res;
    }
};