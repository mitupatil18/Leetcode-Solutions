
#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st ;
        sort(nums.begin(),nums.end());
        int i , j , k, n= nums.size() ;
        for(i = 0 ; i<nums.size();i++)
        {
            j = i+1 , k = n-1 ;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    st.insert({nums[i],nums[j],nums[k]});
                    j++ ;
                    k-- ;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                k-- ;
                else
                j++;
            }
        }
        vector<vector<int>> ans ;
        for(auto i : st)
        ans.push_back(i);
        return ans ;
    }
};