class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> v ;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        v = nums ;
        do{
            ans.push_back(v);
        }
        while(next_permutation(v.begin(), v.end()));
        return ans ;
    }
};