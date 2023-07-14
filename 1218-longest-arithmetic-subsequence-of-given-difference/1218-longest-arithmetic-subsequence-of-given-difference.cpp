class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        int ans = 1 ;
        int i ;
        unordered_map<int,int> m ;
        for(i = 0 ; i<arr.size(); i++)
        {
            if(m.count(arr[i]-d))
            m[arr[i]] = m[arr[i]-d]+1 ;
            else
            m[arr[i]] = 1 ;
            ans = max(ans,m[arr[i]]);
        }
        return ans ;
    }
};