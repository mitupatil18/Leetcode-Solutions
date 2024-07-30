class Solution {
public:
    int minAddToMakeValid(string s) {
        int o = 0 , c = 0 , ans = 0 ;
        stack<char> st;
        for(auto x : s)
        {
            if(x=='(')
            {
                st.push(x);
            }
            else
            {
                if(!st.empty() && st.top()=='(')
                st.pop();
                else 
                ans++;
            }
        }
        return st.size()+ans;
    }
};