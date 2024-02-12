class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        vector<int> v ;
        stack<int> s;
        int n  = p.size();
        for(int i = n-1 ; i>=0 ;i--)
        {
            while(!s.empty() && p[i]<s.top())
            s.pop();
            if(!s.empty())
            v.push_back(p[i]-s.top());
            else
            v.push_back(p[i]);
            s.push(p[i]);
        }
        reverse(v.begin(),v.end());
        return v ;
    }
};