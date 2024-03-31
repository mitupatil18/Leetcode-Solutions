class Solution {
public:
    string longestPalindrome(string s) {
        int ans = 0, n = s.size() ;
        string z;
        for(int i = 0 ; i<s.size();i++)
        {
            int j = i-1, k = i+1;
            while(j>=0 && k<n)
            {
                if(s[j]!=s[k])
                break;
                j--;
                k++;
            }
            j++;
            k--;
            if(k-j+1>ans)
            {
                ans = k-j+1;
                z = s.substr(j,k-j+1);
            }
            j = i , k = i+1;
            while(j>=0 && k<n)
            {
                if(s[j]!=s[k])
                break;
                j--;
                k++;
            }
            j++;
            k--;
            if(k-j+1>ans)
            {
                ans = k-j+1;
                z = s.substr(j,k-j+1);
            }
        }  
        return z;
    }
};