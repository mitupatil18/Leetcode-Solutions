class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> min_freq(26, INT_MAX); 
        vector<string> result;
        
        for (string& word : words) {
            vector<int> char_count(26, 0);
            for (char c : word) {
                char_count[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                min_freq[i] = min(min_freq[i], char_count[i]);
            }
        }
        
        for (int i = 0; i < 26; ++i) {
            while (min_freq[i]--) {
                result.push_back(string(1, i + 'a'));
            }
        }
        
        return result;
    }
};
