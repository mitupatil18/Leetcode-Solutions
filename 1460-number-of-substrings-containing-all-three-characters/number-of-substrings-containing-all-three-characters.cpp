class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0 , j = 0 , cnt = 0 , n = s.size();
        map<char,int> m;
            while(j<n)
            {
                m[s[j]]++;
                while(m.size()==3)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    {
                        m.erase(s[i]);
                        
                    }
                    cnt+=n-j;
                    i++;
                }
                j++;
            }
        
        return cnt;
    }
};