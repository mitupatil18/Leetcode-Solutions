#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        long long prod = 1;
        int n = nums.size();
        int ans = nums[0];
        
        for (int i = 0; i < n; i++) {
            prod *= nums[i];
            ans = std::max(ans, static_cast<int>(prod));
            if (prod == 0 || prod<=INT_MIN)
                prod = 1;
        }
        
        prod = 1;
        
        for (int i = n - 1; i >= 0; i--) {
            prod *= nums[i];
            ans = std::max(ans, static_cast<int>(prod));
            if (prod == 0 || prod<=INT_MIN)
                prod = 1;
        }
        
        return ans;
    }
};
