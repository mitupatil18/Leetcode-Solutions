class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        long long mn = p[0], mx = p[0]; // Variables changed to long long
        for (auto x : p) {
            mn = min(mn, (long long)x); // Casting x to long long
            mx = max(mx, (long long)x); // Casting x to long long
        }
        long long l = 1, r = mx, minSpeed = mx; // The minimum possible speed is 1, not mn.
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            long long hours = 0;
            for (int pile : p) {
                hours += (pile + mid - 1) / mid; // Calculate the total hours needed for this speed.
            }
            if (hours <= h) {
                minSpeed = min(minSpeed, mid); // Update the minimum speed if this speed is possible.
                r = mid - 1; // Search for smaller speeds.
            } else {
                l = mid + 1; // Search for larger speeds.
            }
        }
        return minSpeed;
    }
};
