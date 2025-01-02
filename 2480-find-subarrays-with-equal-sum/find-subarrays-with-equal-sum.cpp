class Solution {
public:
	bool findSubarrays(vector<int>& nums) {
		int n=nums.size();
		int count=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n-1;j++){
				if(nums[j]+nums[j+1]==nums[i]+nums[i+1]) 
                return 1;
			}
		}
		return count>=1;
	}
};