class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> count(26, 0);
        int maxCount = 0, maxLength = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            count[s[right] - 'A']++;
            maxCount = max(maxCount, count[s[right] - 'A']);

            if (right - left + 1 - maxCount > k) {
                count[s[left] - 'A']--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
