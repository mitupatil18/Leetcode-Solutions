class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        if (m.empty() || m[0].empty()) return false;
        
        int row = m.size();
        int col = m[0].size();
        
        int i = 0, j = col - 1;
        
        while (i < row && j >= 0) {
            if (m[i][j] == t) return true;
            else if (m[i][j] > t) j--;
            else i++;
        }
        
        return false;
    }
};