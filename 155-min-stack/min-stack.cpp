#include <vector>
#include <stack>
#include <climits>

class MinStack {
public:
    std::stack<int> s; // main stack to store values
    std::stack<int> minStack; // auxiliary stack to store minimum values
    
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        if (!minStack.empty()) {
            return minStack.top();
        }
        return INT_MAX; 
    }
};
