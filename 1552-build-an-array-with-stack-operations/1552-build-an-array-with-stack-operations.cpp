class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int idx=0;
        vector<string> ans;
        stack<int> s;
        for(int i=1;i<=n;i++)
        {
            if(i==target[idx])
            {
                while(s.empty()==false and (idx==0 || s.top()!=target[idx-1]))
                {
                    s.pop();
                    ans.push_back("Pop");    
                }
                s.push(i);
                idx++;
                ans.push_back("Push");
            }
            else
            {
                s.push(i);
                ans.push_back("Push");
            }

            if(idx==target.size())
            break;

        }
        return ans;
    }
};