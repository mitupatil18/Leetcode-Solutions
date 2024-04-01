class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> s;
        int tot = 0;
        for (const string& operation : op) {
            if (operation == "+") {
                if (!s.empty()) {
                    int a = s.top();
                    s.pop();
                    if (!s.empty()) {
                        int b = s.top();
                        s.push(a);
                        s.push(a + b);
                        tot += (a + b);
                    }
                }
            } else if (operation == "D") {
                if (!s.empty()) {
                    int doubled = s.top() * 2;
                    s.push(doubled);
                    tot += doubled;
                }
            } else if (operation == "C") {
                if (!s.empty()) {
                    tot -= s.top();
                    s.pop();
                }
            } else {
                int score = stoi(operation);
                s.push(score);
                tot += score;
            }
        }
        return tot;
    }
};
