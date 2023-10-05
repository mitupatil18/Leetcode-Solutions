class Solution {
public:
    int count(int n)
    {
        int cnt = 0 ;
        while(n)
        {
            if(n%2)cnt++ ;
            n /= 2 ;
        }
        return cnt ;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size() ;
        map<int,vector<int>> ans ;
        for(int i = 0 ; i<n ; i++)
        {
            int x = count(arr[i]);
            ans[x].push_back(arr[i]);
        }

        int i = 0 ;
        for(auto it = ans.begin() ; it!=ans.end(); it++)
        {
            sort(it->second.begin(), it->second.end());
            for(int j = 0 ; j<it->second.size() ; j++)
            {
                arr[i] = it->second[j];
                i++ ;
            }
        }
        return arr ;
    }
};