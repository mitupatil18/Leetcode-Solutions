class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // Adjacency list to store the graph
        vector<vector<pair<int, int>>> adj(n);
        for (auto& flight : flights) {
            adj[flight[0]].emplace_back(flight[1], flight[2]);
        }

        // Priority queue to store {cost, current node, stops used}
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
        pq.emplace(0, src, 0);

        // To store the minimum cost to reach a node with at most 'k' stops
        vector<vector<int>> minCost(n, vector<int>(k + 2, INT_MAX));
        minCost[src][0] = 0;

        while (!pq.empty()) {
            auto [cost, node, stops] = pq.top();
            pq.pop();

            // If destination is reached, return the cost
            if (node == dst) return cost;

            // If stops exceed the allowed limit, skip
            if (stops > k) continue;

            // Explore neighbors
            for (auto& [next, price] : adj[node]) {
                int newCost = cost + price;
                // Only add to queue if this path is cheaper
                if (newCost < minCost[next][stops + 1]) {
                    minCost[next][stops + 1] = newCost;
                    pq.emplace(newCost, next, stops + 1);
                }
            }
        }

        // If no path is found, return -1
        return -1;
    }
};
