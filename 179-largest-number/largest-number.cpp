class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v ;
        string ans = "" ;
        for(int i = 0;i<nums.size();i++)
        {
            string s = to_string(nums[i]);
            v.push_back(s);
        }
        sort(v.begin(), v.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });
        if (v[0] == "0") return "0";
        for(int i = 0 ; i<v.size() ;i++)
        ans += v[i];
        return ans;
    }
};