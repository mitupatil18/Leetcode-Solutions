class Solution {
public:
    vector<string> letterCombinations(string digits) 
    {
        if(digits.empty()) return {} ;
        string phone_map[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv",       "wxyz"};
        vector<string> ans;
        find("" , digits, phone_map,ans);
        return ans ;
    }
    void find(string c , string next_digits , string phone_map[], vector<string>& ans)
    {
        if(next_digits.empty())
        ans.push_back(c);
        else
        {
            string letters = phone_map[next_digits[0]-'2'];
            for(char l : letters)
            find(c+l , next_digits.substr(1), phone_map,ans);
        }
    }
};