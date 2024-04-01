class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        queue<int> q;
        for(auto x : students )
        q.push(x);
        for(int i = sandwiches.size()-1 ; i>=0 ;i--)
        s.push(sandwiches[i]);
        int cnt = 0 ;
        while(!q.empty() && !s.empty())
        {
            if(q.front()==s.top())
            {
                cnt = 0 ;
                s.pop();
                q.pop();
            }
            else
            {
                if(cnt==q.size())
                break;
                cnt++;
                q.push(q.front());
                q.pop();
            }
        }
        return q.size();
    }
};