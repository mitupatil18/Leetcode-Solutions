class Solution {
public:
    int maxDepth(string s) {
        int ans = 0 , dep = 0 ;
        stack<char> st;
        for(int i = 0 ; i<s.size() ;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                dep++;
            }
            else if(s[i]==')')
            {
                st.pop();
                dep--;
            }
            ans = max(ans,dep);
        }
        return ans;
    }
};