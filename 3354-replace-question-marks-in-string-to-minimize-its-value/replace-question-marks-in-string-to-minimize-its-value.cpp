class Solution {
public:
    string minimizeStringValue(string s) {
        vector<int> v(26,0);
        string ans;
        for(int i = 0 ; i<s.size();i++)
        {
            if(s[i]!='?')
            v[s[i]-'a']++;
        }
        for(int i = 0 ; i<s.size();i++)
        {
            if(s[i]=='?')
            {
                int mn = INT_MAX ;
                char c ;
                for(int i = 0 ; i<26 ;i++)
                {
                    if(v[i]-1<mn )
                    {
                        mn = v[i]-1;
                       c = 'a' + i;
                    }
                }
                v[c-'a']++;
                ans.push_back(c);
            }
        }
        // cout<<ans<<endl;
        sort(ans.begin(),ans.end());
        for(int i = 0, j = 0; i < s.size(); ++i){
        if(s[i] == '?') s[i] = ans[j++];
    }
        return s;
    }
};