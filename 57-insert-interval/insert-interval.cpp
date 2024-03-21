class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        int min , max ;
        vector<vector<int>> m ;
        for(auto &&i :intervals)
        {
            if(i[1]<newInterval[0])
            m.push_back(i);
            else if(newInterval[1]<i[0])
            {
                m.push_back(newInterval);
                newInterval=i;
            }
            else
            {
                if(newInterval[0] > i[0])
                newInterval[0] = i[0];
                if(newInterval[1] < i[1])
                newInterval[1] = i[1];
            } 
        }
            m.push_back(newInterval);
        return m ;
    }
};