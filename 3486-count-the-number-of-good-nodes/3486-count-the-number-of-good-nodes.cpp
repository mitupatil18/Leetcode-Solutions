#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> tree(n);
        vector<int> sub(n, 0);
        for (const auto& edge : edges) {
            tree[edge[0]].push_back(edge[1]);
            tree[edge[1]].push_back(edge[0]);
        }
        function<int(int, int)> dfs = [&](int node, int parent) -> int {
            int size = 1;
            for (int neighbor : tree[node]) {
                if (neighbor != parent) {
                    size += dfs(neighbor, node);
                }
            }
            sub[node] = size;
            return size;
        };

        dfs(0, -1);
        int good_nodes_count = 0;

        function<bool(int, int)> is_good = [&](int node, int parent) -> bool {
            unordered_set<int> sizes;
            for (int neighbor : tree[node]) {
                if (neighbor != parent) {
                    sizes.insert(sub[neighbor]);
                }
            }
            return sizes.size() <= 1;
        };

        function<void(int, int)> count_good_nodes = [&](int node, int parent) {
            if (is_good(node, parent)) {
                ++good_nodes_count;
            }
            for (int neighbor : tree[node]) {
                if (neighbor != parent) {
                    count_good_nodes(neighbor, node);
                }
            }
        };

        count_good_nodes(0, -1);

        return good_nodes_count;
    }
};
