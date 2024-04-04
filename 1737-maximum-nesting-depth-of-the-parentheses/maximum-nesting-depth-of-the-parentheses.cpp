class Solution {
public:
    int maxDepth(string s) {
        int ans = 0 , dep = 0 ;
        for(int i = 0 ; i<s.size() ;i++)
        {
            if(s[i]=='(')
            dep++;
            else if(s[i]==')')
            dep--;
            ans = max(ans,dep);
        }
        return ans;
    }
};