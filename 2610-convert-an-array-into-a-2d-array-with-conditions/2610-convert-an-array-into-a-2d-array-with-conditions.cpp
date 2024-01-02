class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans ;
        vector<int> v(n+1,0);
        for(int i = 0 ; i<n ;i++)
        {
            v[nums[i]]++ ;
        }
        int c = 0 ;
        while(c<n)
        {
            vector<int> d ;
            for(int i = 1 ; i<=n ;i++)
            {
                if(v[i]>0)
                {
                    v[i]--;
                    d.push_back(i);
                    c++ ;
                }
            }
            ans.push_back(d);
        }
        return ans ;
    }
};