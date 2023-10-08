class Solution {
public:

    int dp[501][501]; 

    int helper(int i, int j, int cnt, vector<int> &nums1, vector<int> &nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if(i >= n or j >= m) {
            // if(cnt > 0) return 0;
            // return INT_MIN;

            return 0; 
        }

        if(dp[i][j] != -1) return dp[i][j];

        int res = 0;
        // res = max(res, helper(i+1, j+1, nums1, nums2));
        res = max(res, max(helper(i+1, j, cnt, nums1, nums2), helper(i, j+1, cnt, nums1, nums2))); 

        res = max(res, nums1[i]*nums2[j] + helper(i+1, j+1, cnt+1, nums1, nums2));


        return dp[i][j] = res;
    } 

    int check(vector<int> &nums1, vector<int> &nums2) {
        int n = nums1.size();
        int m = nums2.size(); 


        bool pos = true;
        bool neg = true; 

        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(nums1[i] < 0) {
                pos = false; 
            }
            mini = min(mini, nums1[i]);
        }

        for(int i = 0; i < m; i++) {
            if(nums2[i] > 0) {
                neg = false;
            }
            maxi = max(maxi, nums2[i]);
        }

        if(pos and neg) {
            return maxi*mini; 
        }

        return INT_MAX; 

    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int res = check(nums1, nums2);
        if(res != INT_MAX) return res;
        res = check(nums2, nums1);
        if(res != INT_MAX) return res; 
        

        memset(dp, -1, sizeof dp); 

        return helper(0, 0, 0, nums1, nums2);
    }
};