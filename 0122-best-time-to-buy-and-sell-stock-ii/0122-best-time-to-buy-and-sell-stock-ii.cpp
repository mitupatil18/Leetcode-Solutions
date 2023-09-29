class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int count=0;
        int n = prices.size();
        for(int i=0;i<n-1;i++){
            int temp=0;
            if(prices[i]<prices[i+1]) temp=prices[i+1]-prices[i];
            count=count+temp;
        }
        return count;
    }
};