class Solution {
public:
    map<pair<int,int>,bool> dp;
    bool func(int i,unordered_set<int>& s,int last,int k)
    {
        if(i==last)return true;
        if(i>last)return false;
        if(k==0)return false;
        if(dp.find({i,k})!=dp.end())return dp[{i,k}];
        if(s.find(i)==s.end())return false;
        return dp[{i,k}]=func(i+k-1,s,last,k-1) || func(i+k,s,last,k) || func(i+k+1,s,last,k+1);
    }
    bool canCross(vector<int>& stones) {
        if(stones[1]!=1)return false;
        dp.clear();
        unordered_set<int> s(stones.begin(),stones.end());
        return func(1,s,stones.back(),1);
    }
};