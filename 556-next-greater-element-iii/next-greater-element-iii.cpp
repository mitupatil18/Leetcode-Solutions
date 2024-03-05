class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        next_permutation(s.begin(),s.end());
        int ans = stoll(s);
        return ans>INT_MAX || ans<=n ? -1 : ans ;
    }
};