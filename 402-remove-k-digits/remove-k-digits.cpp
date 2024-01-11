class Solution {
public:
    string removeKdigits(string s, int k) {
        stack<int> st;
        for(int i = 0 ; i<s.size() ;i++)
        {
            while(!st.empty()&&s[i]<st.top() && k>0)
            {
                st.pop();
                k-- ;
            }
            if(st.empty()&&s[i]=='0')
            continue;
            st.push(s[i]);
        } 
        while(!st.empty()&& k--)
        {
           st.pop();
        }

       if(st.empty())
       {
       return "0";
       }
       string ans="";

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};