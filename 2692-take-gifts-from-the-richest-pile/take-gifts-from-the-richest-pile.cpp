class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        long long ans = 0 ;
        for(auto x : gifts)
        pq.push(x);
        while(k--)
        {
            int x = pq.top();
            pq.pop();
            int y = sqrt(x);
            pq.push(y);
        }
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};