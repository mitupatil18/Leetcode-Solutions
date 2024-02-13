class Solution {
public:
    int isPallindrome(string s)
    {
        int i , j;
        for(i = 0 , j = s.size()-1 ; i<j ;i++,j--)
        {
            if(s[i]!=s[j])
            break;
        }
        return (j<=i);
    }
    string firstPalindrome(vector<string>& words) {
        for(int i  = 0 ; i<words.size();i++)
        {
            if(isPallindrome(words[i]))
            return words[i];
        }
        return "" ;
    }
};