class Solution {
public:
    void find(int start, int n , int k , vector<int>& combination,vector<vector<int>>& result)
    {
        if(k==0)
        {
            result.push_back(combination);
            return ;
        }
        for(int i = start ; i<=n ; i++)
        {
            combination[combination.size()-k] = i ;
            find(i+1,n,k-1,combination,result);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result ;
        vector<int> combination(k) ;
        find(1,n,k,combination, result);
        return result ;
    }
};