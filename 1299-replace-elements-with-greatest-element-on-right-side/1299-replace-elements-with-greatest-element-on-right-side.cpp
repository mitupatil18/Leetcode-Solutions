class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int> ans ;
        vector<int> res ;
        ans.push(-1);
        int i = arr.size()-1 ;
        int max = arr[i] ;
        i-- ;
        while(i>=0)
        {
            ans.push(max);
            if(max<arr[i])
                max = arr[i];
            i-- ;
        }
        while(!ans.empty())
        {
            res.push_back(ans.top());
            ans.pop() ;
        }
        return res ;
    }
};