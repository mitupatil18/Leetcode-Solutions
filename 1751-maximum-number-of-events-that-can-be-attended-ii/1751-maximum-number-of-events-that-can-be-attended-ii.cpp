class Solution {
public:
    unordered_map<int, unordered_map<int, int>> dp;

    int call(vector<vector<int>>& events, int k, int idx) {
        if (k == 0 || idx >= events.size()) {
            return 0;
        }
        
        if (dp.count(k) && dp[k].count(idx)) {
            return dp[k][idx];
        }
        
        int nextEventIdx = idx + 1;
        while (nextEventIdx < events.size() && events[nextEventIdx][0] <= events[idx][1]) {
            nextEventIdx++;
        }

        int attendCurrentEvent = events[idx][2] + call(events, k - 1, nextEventIdx);
        int skipCurrentEvent = call(events, k, idx + 1);

        dp[k][idx] = max(attendCurrentEvent, skipCurrentEvent);
    
        return dp[k][idx];
    }    
    
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(),events.end());
        return call(events,k,0);
    }
};