class Solution {
    public int isPallindrome(String s, int l , int r)
    {
        int cnt = 0 ;
        while(l>=0 && r<s.length() && s.charAt(l--)==s.charAt(r++))
        {
           cnt++ ;
        }
        return cnt;
    }
    public int countSubstrings(String s) {
        int ans = 0 ;
        for(int i = 0 ; i<s.length();i++)
        {
            int even = isPallindrome(s,i,i+1);
            int odd = isPallindrome(s,i-1,i+1);
            ans += even+odd +1 ;
        }
        return ans ;
    }
}