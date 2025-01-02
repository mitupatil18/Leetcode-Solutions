class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> v, res;
        for(auto x : words)
        {
            int i = 0 , j = x.size()-1;
            if(x[i]=='a' || x[i]=='e'  || x[i]=='i' || x[i]=='o' || x[i]=='u')
            {
                if(x[j]=='a' || x[j]=='e'  || x[j]=='i' || x[j]=='o' || x[j]=='u')
                v.push_back(1);
                else
                v.push_back(0);
            }
            else
            v.push_back(0);
        }
        vector<int> pref(v.size());
        pref[0] = v[0];
        for (int i = 1; i < v.size(); i++) {
            pref[i] = pref[i - 1] + v[i];
        }
        vector<int> ans;
        for (auto& it : queries) {
            int l = it[0];
            int r = it[1];
            ans.push_back(l == 0 ? pref[r] : pref[r] - pref[l - 1]);
        }
        return ans;
    }
};