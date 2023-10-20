class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st ;
        int i = 0 ;
        string a= "" , b = "" ;
        while(i<s.size())
        {
            if(s[i]=='#' && !st.empty())
            st.pop();
            else if(s[i]!='#')
            st.push(s[i]);
            i++ ;
        }
        while(!st.empty())
        {
            a.push_back(st.top());
            st.pop() ;
        }
        i = 0 ;
        while(i<t.size())
        {
            if(t[i]=='#' && !st.empty())
            st.pop();
            else if(t[i]!='#')
            st.push(t[i]);
            i++ ;
        }
        while(!st.empty())
        {
            b.push_back(st.top());
            st.pop() ;
        }
        return a==b ;
    }
};