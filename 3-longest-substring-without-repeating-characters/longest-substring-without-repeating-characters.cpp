class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        for(int i = 0 ; i<s.size() ;i++)
        {
            set<char> st;
            int j;
            for( j = i ; j<s.size() ;j++)
            {
                if(st.find(s[j])!=st.end())
                break;
                st.insert(s[j]);
            }
            ans=max(ans,j-i);
        }
        return ans;
    }
};