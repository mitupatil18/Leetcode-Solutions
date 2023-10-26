class Solution {

    constexpr static int mod = 1e9 + 7;

public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unordered_map<int,long> dp;
        dp[arr[0]] = 1;
        for (int i=1;i<arr.size(); ++i){
            dp[arr[i]] = 1;
            for (int j=0;j<i;++j){
                if (arr[i] % arr[j] == 0 && dp.count(arr[j]) && dp.count(arr[i] / arr[j])) {
                    dp[arr[i]] += (dp[arr[j]] * dp[arr[i] / arr[j]]);
                } 
            }
        }
        int ret = 0;
        for (const auto& element : dp) {
            ret += element.second % mod;
            ret %= mod;
        }
        return ret;
    }
};