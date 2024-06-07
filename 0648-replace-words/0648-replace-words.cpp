class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        unordered_set<string> dict(d.begin(), d.end());
        vector<string> str;
        string ans;
        int j = 0, i;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                str.push_back(s.substr(j, i - j));
                j = i + 1;
            }
        }
        str.push_back(s.substr(j, i - j));
        for (int l = 0; l < str.size(); l++) {
            for (int k = 1; k <= str[l].size(); k++) {
                if (dict.find(str[l].substr(0, k)) != dict.end()) {
                    str[l] = str[l].substr(0, k);
                    break;
                }
            }
        }
       for (auto x : str) {
            ans += x;
            ans.push_back(' ');
        }
        if (!ans.empty()) {
            ans.pop_back();  
        }
        return ans;
    }
};