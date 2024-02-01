class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans ;
        vector<int> v ;
        if(nums.size()<3)
            return {{}} ;
        for(int i = 0 ; i<nums.size() ; i+=3)
        {
            if(abs(nums[i+2]-nums[i])<=k )
                    ans.push_back({nums[i],nums[i+1],nums[i+2]});
            
            
        }
        if(ans.size()==nums.size()/3)
        return ans ;
        else
            return {} ;
    }
};