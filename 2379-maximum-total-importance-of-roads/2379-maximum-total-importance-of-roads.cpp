class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        map<int, int> m;
        map<int,int> val;
        long long ans = 0, z = n;
        for (int i = 0; i < roads.size(); i++) {
            m[roads[i][0]]++;
            m[roads[i][1]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x : m)
        pq.push({x.second,x.first});
        while(!pq.empty())
        {
            auto x = pq.top();
            pq.pop();
            val[x.second] = z;
            z--;
        }
        for(auto x : m)
        {
            ans += static_cast<long long>(val[x.first])*x.second;
        }
        return ans;
    }
};