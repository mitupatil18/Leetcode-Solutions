class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int minVal = arr[0][0];
        int maxVal = arr[0].back();
        int ans = 0;
        
        for (int i = 1; i < n; ++i) {
            ans = max(ans, abs(arr[i].back() - minVal));
            ans = max(ans, abs(maxVal - arr[i][0]));
            minVal = min(minVal, arr[i][0]);
            maxVal = max(maxVal, arr[i].back());
        }
        
        return ans;
    }
};
