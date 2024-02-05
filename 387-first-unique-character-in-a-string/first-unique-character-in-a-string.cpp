class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q ;

        unordered_map<char,int> m;
        for(int i =0 ; i<s.size();i++)
        {
            m[s[i]]++;
            if(m[s[i]]==1)
            q.push(i);
            if(!q.empty() && s[i]==s[q.front()] && m[s[i]]>1)
            q.pop();
        }
        while(!q.empty())
        {
            int a= q.front();
            if(m[s[a]]>1)
            q.pop();
            else
            break;
        }
        return q.empty()?-1:q.front();
    }
};