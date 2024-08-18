class Solution {
public:
    long long maxEnergyBoost(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<long long> x(n);
        vector<long long> y(n);
        x[0] = a[0];
        y[0] = b[0];
        for (int i = 1; i < n; ++i) {
            y[i] = max(y[i-1] + b[i], x[i-1]);
            x[i] = max(x[i-1] + a[i], y[i-1]);
        }
        return max(x[n-1], y[n-1]);
    }
};