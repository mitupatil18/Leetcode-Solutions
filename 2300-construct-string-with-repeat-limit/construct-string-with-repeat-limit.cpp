class Solution {
public:
    string repeatLimitedString(string s, int l) {
        string a = "";
        vector<int> v(26,0);
        for(int i = 0; i<s.size();i++) v[s[i] -'a']++;
        reverse(v.begin(),v.end());
        for(int i = 0 ; i<26 ;i++)
        {
            int x = v[i], cnt = 0;
            while(x>0)
            {
                a.push_back('z'-i);
                x--;
                cnt++;
                if(cnt==l && x>0)
                {
                    int k = i+1;
                    while(k<26 && v[k]==0)k++;
                    if(k==26)break;
                    int y = v[k];
                    a.push_back('z'-k);
                    v[k]--;
                    cnt = 0;
                }
            }
            // cout<<a<<endl;
        }
        return a;
    }
};