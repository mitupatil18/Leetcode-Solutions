class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        vector<int> min_nums(s.length() + 1, 0);
        for (int i = 1; i <= s.length(); i++)
        {
            string sub_s = s.substr(0, i);
            min_nums[i] = min_nums[i-1] + 1;
            for (string word : dictionary)
            {
                if (word.length() <= sub_s.length())
                {
                    if (sub_s.substr(sub_s.length() - word.length(), word.length()) == word)
                    {
                        if (min_nums[sub_s.length() - word.length()] < min_nums[i])
                        {
                            min_nums[i] = min_nums[sub_s.length() - word.length()];
                        }
                    }
                }
            }
        }
        return min_nums[s.length()];
    }
};