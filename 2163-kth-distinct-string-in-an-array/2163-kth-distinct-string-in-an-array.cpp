class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> s;
        set<string> st;
        int c = 0 ;
        for(int i = 0 ; i<arr.size();i++)
        s[arr[i]]++;
        for(auto x : s)
        {
            if(x.second==1)
            st.insert(x.first);
        }
        for(int i = 0 ; i<arr.size();i++)
        {
            if(st.find(arr[i])!=st.end())
            c++;
            if(c==k)
            return arr[i];
        }
        return "" ;
    }
};