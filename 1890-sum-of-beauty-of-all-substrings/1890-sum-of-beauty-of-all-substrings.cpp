class Solution {
public:
    int beautySum(string s) {
        int sum = 0 , n = s.size();
        for(int i = 0; i<n -1;i++)
        {
            map<char,int> m;
            
            m[s[i]]++;
            for(int j = i+1 ; j<n ;j++)
            {
                m[s[j]]++;
                int mn = INT_MAX, mx = -1;
                for(auto it : m){
                    if(it.second>mx){
                        mx=it.second;
                    }
                    if(it.second<mn){
                        mn=it.second;
                    }
                }
                sum += (mx-mn);
            }
        }
        return sum;
    }
};