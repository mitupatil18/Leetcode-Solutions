class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        map<int,int> m;
        vector<int> v;
        for(auto x : nums)
        m[x]++;
        for(auto x : m)
        {
            pq.push({x.second,x.first});
        }
        while(!pq.empty() && k>0)
        {
            auto it = pq.top();
            v.push_back(it.second);
            pq.pop();
            k--;
        }
        return v;
    }
};