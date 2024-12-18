class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& flight : flights) {
            adj[flight[0]].emplace_back(flight[1], flight[2]);
        }

        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
        pq.emplace(0, src, 0);

        vector<vector<int>> minCost(n, vector<int>(k + 2, INT_MAX));
        minCost[src][0] = 0;

        while (!pq.empty()) {
            auto [cost, node, stops] = pq.top();
            pq.pop();

            if (node == dst) return cost;

            if (stops > k) continue;

            for (auto& [next, price] : adj[node]) {
                int newCost = cost + price;
                if (newCost < minCost[next][stops + 1]) {
                    minCost[next][stops + 1] = newCost;
                    pq.emplace(newCost, next, stops + 1);
                }
            }
        }

        return -1;
    }
};
