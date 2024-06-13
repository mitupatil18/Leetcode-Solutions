class Solution {
public:
    int minMovesToSeat(vector<int>& s, vector<int>& st) {
        int ans = 0 ;
        priority_queue<int> p1(s.begin(),s.end());
        priority_queue<int> p2(st.begin(),st.end());
        for(int i = 0 ; i<s.size();i++)
        {
            ans += abs(p1.top()-p2.top());
            p1.pop();
            p2.pop();
        }
        return ans;
    }
};