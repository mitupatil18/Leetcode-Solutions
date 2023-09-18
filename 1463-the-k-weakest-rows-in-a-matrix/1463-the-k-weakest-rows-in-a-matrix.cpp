class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rows=mat.size(),cols=mat[0].size();
        vector<int> result;
        for(int j=0;j<cols;j++) {
            for(int i=0;i<rows;i++) {
                if(mat[i][j]==0) {
                    if(j==0 || j-1>=0 && mat[i][j-1]!=0) {
                        result.push_back(i);
                    }
                    if(result.size()==k) {
                        return result;
                    }
                }
            }
        }
        for(int i=0;i<rows;i++) {
            if(mat[i][cols-1]==1) {
                result.push_back(i);
                if(result.size()==k) {
                    return result;
                }
            }
        }
        return result;
    }
};