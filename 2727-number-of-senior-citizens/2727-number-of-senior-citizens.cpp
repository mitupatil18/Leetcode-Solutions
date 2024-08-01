class Solution {
public:
    int countSeniors(vector<string>& d) {
        int ans = 0 ;
        for(int i = 0 ; i<d.size();i++)
        {
            string s = d[i].substr(11,2);
            int z = stoi(s);
            if(z>60)
            ans++;
        }
        return ans;
    }
};