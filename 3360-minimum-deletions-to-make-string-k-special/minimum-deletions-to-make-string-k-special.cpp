class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char,int> m;
        int d = 0, ans = word.size();
        for(int i = 0; i < word.size(); i++)
            m[word[i]]++;
        vector<int> v;
        for(auto & x : m)
            v.push_back(x.second);
        sort(v.begin(),v.end());
        for(int i = 0 ; i<m.size() ;i++)
        {
            int res = d , mn = v[i];
            for(int j = v.size()-1 ; j>i ;--j )
            {
                if(v[j]-mn<=k)
                break;
                res += v[j]-mn-k;
            }
            ans = min(ans,res);
            d += v[i];
        }
        return ans;
    }
};
