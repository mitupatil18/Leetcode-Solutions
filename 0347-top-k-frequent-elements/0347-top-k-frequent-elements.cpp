class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        vector<int> v;
        map<int,int> m;
        for(auto x : nums)
        m[x]++;
        for(auto x : m)
        pq.push({x.second,x.first});
        while(k>0)
        {
            v.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return v;
    }
};