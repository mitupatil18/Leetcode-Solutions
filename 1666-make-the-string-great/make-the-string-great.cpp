class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i = 1 ; i<s.size() ;i++)
        {
            if(!st.empty() && abs(st.top()-s[i])==32 )
            {
                st.pop();
            }
            else
            st.push(s[i]);
        }
        string z;
        while(!st.empty())
        {
            z.push_back(st.top());
            st.pop();
        }
        reverse(z.begin(),z.end());
        return z;
    }
};