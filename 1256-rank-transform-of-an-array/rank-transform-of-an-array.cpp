class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<pair<int,int>> q;
        set<int> sett;
        int n = arr.size();
        for(int i = 0 ; i<arr.size() ;i++)
        {
            sett.insert(arr[i]);
            q.push({arr[i],i});
        }
        int f = 1, prev;
        n = sett.size();
        while(!q.empty())
        {
            auto x = q.top();
            q.pop();
            if(f!=1 && x.first!=prev)
            n--;
            else 
            f= 0 ;
            arr[x.second] = n;
            prev = x.first ;
        }
        return arr;
    }
};