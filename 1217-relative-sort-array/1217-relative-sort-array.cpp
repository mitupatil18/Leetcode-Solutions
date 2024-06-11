class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m ;
        for(auto x : arr1)
        m[x]++;
        int i = 0 , j = 0 ;
        for(; i<arr2.size();i++)
        {
            while(m[arr2[i]]>0)
            {
                arr1[j++] = arr2[i];
                m[arr2[i]]--;
            }
            m.erase(arr2[i]);
        }
        for(auto x : m)
        {
            while(x.second>0)
            {
                arr1[j++] = x.first;
                x.second--;
            } 
            m.erase(x.first);
        }
        return arr1;
    }
};