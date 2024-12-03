class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        int n = sp.size();
        int i = s.size()-1;
        for(int j = 0 ; j<n ;j++)
        s += " ";
        int k = s.size()-1;
        int j = sp.size()-1;
        while(i>=0 && j>=0)
        {
            if(i!=sp[j])
            {
                swap(s[i],s[k]);
                i--;
                k--;
            }
            else
            {
                swap(s[i],s[k]);
                k--;
                j--;
            }
        }
        return s;
    }
};