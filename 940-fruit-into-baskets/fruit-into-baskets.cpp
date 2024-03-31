class Solution {
public:
    int totalFruit(vector<int>& f) {
        if(f.size()==1)
        return 1;
        int ans = 0 , cnt = 0 , n = f.size(), j = 0 ;
        map<int,int> m;
        for(int i = 0 ; i<n ;i++)
        {
            m[f[i]]++;
            while(m.size()>2)
            {
                m[f[j]]--;
                if(m[f[j]]==0)
                m.erase(f[j]);
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};