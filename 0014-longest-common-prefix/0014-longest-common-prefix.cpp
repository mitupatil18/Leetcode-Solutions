class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i , j ;
        string s = "" ;
        for(i = 0 ; i<strs[0].size();i++)
        {
            for(j = 1 ; j<strs.size();j++)
            {
                if(i==strs[j].length() || strs[0][i]!=strs[j][i])
                    break ;
            }
            if(j!=strs.size())
                break;
            else
               s = s+strs[j-1][i]; 
        }
        return s ;
    }
};