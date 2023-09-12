class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26,0);
        int del = 0 ;
        for(int i = 0 ; i<s.size() ; i++)
        {
            v[s[i]-'a']++;
        }
        int ans=0;
        unordered_set<int> st;
        for(int i=0; i<26; i++)
        {
            if(st.count(v[i])!=0) 
            {
                while(st.count(v[i])!=0 && v[i]>0) 
                {
                    v[i]--;
                    ans++;
                } 
                st.insert(v[i]); 
            }
            else
            {
                st.insert(v[i]); 
            }
        }
        return ans; 
    }

};