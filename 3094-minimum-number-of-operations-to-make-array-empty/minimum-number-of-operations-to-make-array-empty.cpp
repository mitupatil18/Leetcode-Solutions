class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> m ;
        int ans = 0 ;
        for(auto & x : nums)
        m[x]++ ;
        for(auto & x :m)
        {
            int a = x.second ;
            if(x.second==1)
            return -1 ;
            int cnt = 0 ;
            while(a>1)
            {
                if(a%3==0)
                break;
                a -= 2 ;
                cnt++ ;
            }
            ans += (cnt+a/3);
        }
        return ans ;
    }
};