class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& g) {
        vector<string>ans;
        int i=0,j=1 , n = words.size();
        ans.push_back(words[i]);
        while(j<n){
            if(g[i]!=g[j]){
                ans.push_back(words[j]);
                i=j;
            }
            j++;
        }
        return ans;
        
    }
};