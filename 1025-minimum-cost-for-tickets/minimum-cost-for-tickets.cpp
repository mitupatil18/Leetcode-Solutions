class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        int maxDay=days[n-1];

        vector<int> dp(maxDay+1,0);

        unordered_set<int> st(days.begin(),days.end());

        for(int i=1;i<=maxDay;i++){
            if(st.find(i)==st.end()){
                dp[i]=dp[i-1];
                continue;
            }
            int step1=costs[0]+dp[max(0,i-1)];
            int step2=costs[1]+dp[max(0,i-7)];
            int step3=costs[2]+dp[max(0,i-30)];
            dp[i]=min({step1,step2,step3});
        }
        return dp[maxDay];
    }
};