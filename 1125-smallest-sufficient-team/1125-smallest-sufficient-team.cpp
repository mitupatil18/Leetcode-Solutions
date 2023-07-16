class Solution {
    vector<int> res;

    void smallestSufficientTeamHelp(int ind, int reqOr, vector<vector<int>> &dp, vector<int> &ans, vector<int> &nums){
        if( reqOr == 0 ){
            if( res.size() == 0 || ans.size() < res.size() ) res = ans;
            return;
        }
        if( ind == nums.size() ) return;

        if( dp[ind][reqOr] != -1 && dp[ind][reqOr] <= ans.size() ) return;

        smallestSufficientTeamHelp(ind+1, reqOr, dp, ans, nums); // not take
        
        ans.push_back(ind);
        smallestSufficientTeamHelp(ind+1, reqOr&(~nums[ind]), dp, ans, nums); // take
        ans.pop_back();
        dp[ind][reqOr] = ans.size();
    }

public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        unordered_map<string, int> mpp;
        int i = 0;
        for(auto &x : req_skills) mpp[x] = i++;

        vector<int> nums;
        for(auto &skills : people){
            int tmp = 0;
            for(auto skill : skills) tmp |= (1<<mpp[skill]);
            nums.push_back(tmp);
        }

        // find sub sequence of nums with minimum length so that subsequence OR sum will be reqOr
        // dp[i][reqOr] = minimum number of numbers required to get a OR sum of reqOr
        int n = nums.size(), reqOr = (1<<req_skills.size()) - 1;
        vector<vector<int>> dp(n, vector<int>(reqOr + 1, -1));
        vector<int> ans;
        smallestSufficientTeamHelp(0, reqOr, dp, ans, nums);
        return res;
    
    }
};
