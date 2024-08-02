class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
         int cnt = 0, ans = 0 ,i = 0 ;
        for(int i = 0 ; i<s.size();i++){
            if(s[i]=='0')
            cnt++;
            if(s[i]=='1' && cnt)
            ans = max(ans+1,cnt);
        }
        return ans;
        
    }
};