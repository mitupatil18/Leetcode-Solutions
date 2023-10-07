class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> m ;
        int i= 0 , ans = 0 ;
        while(i<nums.size())
        {
            m[nums[i]]++;
            i++ ;
        }
        for(auto it = m.begin(); it!=m.end() ; it++)
        {
            int x = it->second;
            if(x==1)
            return -1 ;
            else if(x==2)
            ans += 1;
            else if(x%3==0)
            ans += (x/3) ;
            else
            ans += (x/3)+1 ;
        }
        return ans ;
    }
};