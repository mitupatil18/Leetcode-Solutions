class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        unordered_map<int, unordered_set<int>> m;

        for (auto& prereq : prerequisites) {
            m[prereq[1]].insert(prereq[0]);
        }

        for (int i = 0; i < numCourses; ++i) {
            for (int j = 0; j < numCourses; ++j) {
                if (m[j].count(i)) {
                    m[j].insert(m[i].begin(), m[i].end());
                }
            }
        }

        vector<bool> result;
        for (auto& query : queries) {
            result.push_back(m[query[1]].count(query[0]) > 0);
        }
        return result;
    }
};