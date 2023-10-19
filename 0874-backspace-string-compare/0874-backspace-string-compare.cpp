class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack_s;
    stack<char> stack_t;
    for (char c : s) {
        if (c != '#') {
            stack_s.push(c);
        } else if (!stack_s.empty()) {
            stack_s.pop();
        }
    }
    for (char c : t) {
        if (c != '#') {
            stack_t.push(c);
        } else if (!stack_t.empty()) {
            stack_t.pop();
        }
    }
    string a, b;
    while (!stack_s.empty()) {
        a.push_back(stack_s.top());
        stack_s.pop();
    }

    while (!stack_t.empty()) {
        b.push_back(stack_t.top());
        stack_t.pop();
    }
    return a == b;
    }
};