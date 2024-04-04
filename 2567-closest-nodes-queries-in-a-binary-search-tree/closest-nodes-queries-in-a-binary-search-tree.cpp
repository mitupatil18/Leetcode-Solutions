class Solution {
public:
    void find(TreeNode* a, vector<int>& v) {
        if (a == NULL)
            return;
        find(a->left, v);
        v.push_back(a->val);
        find(a->right, v);
    }
    
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& q) {
        vector<vector<int>> ans;
        vector<int> v;
        find(root, v);
        for (int i = 0; i < q.size(); i++) {
            int l = 0, r = v.size() - 1, mid;
            while (l <= r) { 
                mid = l + (r - l) / 2;
                if (v[mid] == q[i]) {
                    ans.push_back({q[i], q[i]}); 
                    break;
                } else if (v[mid] > q[i]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            if (ans.size() == i) {
                int la = (r >= 0) ? v[r] : -1;
                int lb = (l < v.size()) ? v[l] : -1;
                ans.push_back({la, lb});
            }
        }
        return ans;
    }
};
