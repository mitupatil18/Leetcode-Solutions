class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
       vector<int> v ;
       for(int i = 0 ; i<s.size() ;i++)
        v.push_back(abs(s[i]-t[i]));
        int ans = 0, sum = 0  , cnt = 0 ;
        int i = 0 , j = 0 , n = v.size();
        while(i<n && j<n )
        {
            sum += v[i];
            while(sum>maxCost)
            {
                sum -= v[j];
                j++;
            }
            ans = max(ans,i-j+1);
            i++;
        }
        return ans;
        
    }
};