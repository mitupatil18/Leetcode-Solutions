class Solution {
public:
    map<pair<int, string>, int> m;

    int DFS(vector<bitset<26>>& vbs, bitset<26> curr, int i) {
        if (i == vbs.size()) {
            return 0;
        }
        if (m.count({i, curr.to_string()}) != 0) {
            return m[{i, curr.to_string()}];
        }

        int res = 0;
        if ((curr & vbs[i]).count() == 0) {
            res = DFS(vbs, curr | vbs[i], i + 1) + vbs[i].count();
        }

        res = max(res, DFS(vbs, curr, i + 1));
        return m[{i, curr.to_string()}] = res;
    }

    int maxLength(vector<string>& arr) {
        vector<bitset<26>> vbs;
        for (int i = 0; i < arr.size(); ++i) {
            vbs.push_back({});
            auto& last = vbs.back();
            for (int j = 0; j < arr[i].size(); ++j) {
                if (last[arr[i][j] - 'a'] == true) {
                    vbs.pop_back();
                    break;
                }
                last[arr[i][j] - 'a'] = true;
            }
        }

        return DFS(vbs, {}, 0);
    }
};