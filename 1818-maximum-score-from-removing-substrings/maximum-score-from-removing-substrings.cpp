class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int ans = 0;
        // Process the higher value pair first
        if (x > y) {
            ans += removePairs(s, 'a', 'b', x);
            ans += removePairs(s, 'b', 'a', y);
        } else {
            ans += removePairs(s, 'b', 'a', y);
            ans += removePairs(s, 'a', 'b', x);
        }
        return ans;
    }

private:
    int removePairs(string &s, char first, char second, int value) {
        stack<char> st;
        int gain = 0;
        
        for (char c : s) {
            if (!st.empty() && st.top() == first && c == second) {
                st.pop();
                gain += value;
            } else {
                st.push(c);
            }
        }
        
        // Reconstruct the remaining string
        string remaining;
        while (!st.empty()) {
            remaining += st.top();
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());
        s = remaining;
        
        return gain;
    }
};
