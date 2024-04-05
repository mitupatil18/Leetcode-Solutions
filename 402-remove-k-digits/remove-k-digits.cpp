class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        if (num.length() <= k)
            return "0";
        if (k == 0)
            return num;
        int n = num.size(), i;
        if (n == 0)
            return num;
        s.push(num[0]);
        for (i = 1; i < n; i++) {
            while (k > 0 && !s.empty() && num[i] < s.top())
            {
                s.pop();
                k--;
            }
            s.push(num[i]);
            if (s.size() == 1 && num[i] == '0')
                s.pop();
        }
        while (k and !s.empty()) {
            s.pop();
            k--;
        }
        string z;
        while (!s.empty()) {
            z.push_back(s.top());
            s.pop();
        }
        reverse(z.begin(), z.end());
        if (z.length() == 0)
            return "0";
        return z;
    }
};