class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size() < k) return false;

        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int oddCount = 0;
        for (auto& entry : freq) {
            if (entry.second % 2 != 0) {
                oddCount++;
            }
        }

        return oddCount <= k;
    }
};
