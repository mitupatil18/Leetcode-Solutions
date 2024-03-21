class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, n = s.size() ;
        for(int i = 0 ; i<n ;i++)
        {
            set<int> st;
            int j = i ;
            while(st.find(s[j])==st.end() && j<n)
            {
                st.insert(s[j]);
                j++;
            }
            ans = max(ans,j-i);
        }
        return ans;
    }
};