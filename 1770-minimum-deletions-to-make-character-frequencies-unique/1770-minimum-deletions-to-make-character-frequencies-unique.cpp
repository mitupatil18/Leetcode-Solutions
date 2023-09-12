class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26,0);
        int del = 0 ;
        for(int i = 0 ; i<s.size() ; i++)
        {
            v[s[i]-'a']++;
        }
        set<int> st;
        for(int i = 0 ; i<26 ; i++)
        {
            if(v[i]!=0)
            {
                if(st.find(v[i])!=st.end())
                {
                    while(st.find(v[i])!=st.end() && v[i]>0)
                    {
                        v[i]--;
                        del++ ;
                    }
                    st.insert(v[i]);
                }
                else
                st.insert(v[i]);
            }
        }
        return del ;
    }

};