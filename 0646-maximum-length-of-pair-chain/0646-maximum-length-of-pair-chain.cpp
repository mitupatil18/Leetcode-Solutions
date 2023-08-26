class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(),[](vector<int>& p0, vector<int>& p1){
            return p0[1]<p1[1];
        });
        int i , j , cnt =1 , ind = 0 ;
        for(i = 1 ; i<pairs.size();i++)
        {
            if(pairs[ind][1]<pairs[i][0])
            {
                ind = i ;
                cnt++ ;
            }   
        }
        return cnt;
    }
};