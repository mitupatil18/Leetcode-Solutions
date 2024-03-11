class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> v(26,0);
        string ans = "" ;
        for(auto x : s)
        {
            v[x-'a']++;
        }
        while(1)
        {
            int i;
            for( i = 0 ; i<order.size();i++)
            {
                if(v[order[i]-'a']>0)
                {
                    while(v[order[i]-'a']>0)
                    {
                        ans.push_back(order[i]);
                        v[order[i]-'a']--;
                    }
                }
                else
                break;
            }
            if(i<order.size())
            break;
        }
        for(int i = 0 ; i<26 ;i++)
        {
            while(v[i]>0)
            {
                ans.push_back(i+'a');
                v[i]--;
            }
        }
        return ans;
    }
};