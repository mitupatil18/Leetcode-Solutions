class Solution {
public:
    int minOperations(vector<int>& nums) {
        set<int> st ;
        vector<int> v ;
        int size = nums.size();
        for(int i = 0 ; i<size ; i++)
        st.insert(nums[i]);
        for(int val: st)
        v.push_back(val);
        int l= 0 , r = 0 , mx = 0, n = v.size() ;
        for( ; l<n ; l++)
        {
            while(r<n && v[r]-v[l]<=size-1)
            r++;
            mx = max(mx,r-l);
        }
        return size-mx;
    }
};