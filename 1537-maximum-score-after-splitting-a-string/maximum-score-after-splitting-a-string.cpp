class Solution {
public:
    int maxScore(string s) {
        int one = 0, zero = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                one++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                zero++;
            else {
                one--;
            }
            if (i != n - 1)
                ans = max(ans, (one + zero));
                
        }
        return ans;
    }
};
// ata hotay