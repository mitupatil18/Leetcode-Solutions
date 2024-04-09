class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        vector<int> z = t;
        int ans = 0, n = t.size() ;
        while(1)
        {
            int i;
            for(i = 0 ; i<n ;i++)
            {
                if(t[i]>0)
                {
                    t[i] -= 1;
                    ans++;
                }
                if(t[k]==0)
                break;
            }
            if(t[k]==0)
            break;
        }
        return ans;
    }
};