class Solution {
public:
 vector<int> nextlargest(vector<int> &heights, int n){
        vector<int> next(n);
        stack<int> stack;
        stack.push(-1);
        for(int i = n-1; i>=0; i--){
            while(stack.top() != -1 && heights[stack.top()] >= heights[i])
            {
                stack.pop();
            }
            next[i] = stack.top();
            stack.push(i);
        }
        return next;
    }
    vector<int> prevsmall(vector<int> &heights, int n){
        vector<int> prev(n);
        stack<int> stack;
        stack.push(-1);
        for(int i = 0; i < n; i++){
            while(stack.top() != -1 && heights[stack.top()] >= heights[i]){
                stack.pop();
            }
            prev[i] = stack.top();
            stack.push(i);
        }
        return prev;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        vector<int> prev(n);
        next = nextlargest(heights, n);
        prev = prevsmall(heights, n);
        int area = INT_MIN;
        for(int i = 0; i < n; i++){
            int l = heights[i];
            if(next[i] == -1)
            next[i] = n;
            int b = next[i] - prev[i] - 1;
            int newarea = l*b;
            area = max(area, newarea);
        }
        return area;
    }
};