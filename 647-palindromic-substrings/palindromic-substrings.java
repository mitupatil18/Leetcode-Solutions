class Solution {
    public boolean isPallindrome(String s, int l , int r)
    {
        while(l<r)
        {
            if(s.charAt(l++)!=s.charAt(r--))
            return false;
        }
        return true;
    }
    public int countSubstrings(String s) {
        int ans = 0 ;
        for(int i = 0 ; i<s.length();i++)
        {
            for(int j = i; j<s.length();j++)
            {
                if(isPallindrome(s,i,j))
                ans++ ;
            }
        }
        return ans ;
    }
}