class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> v;
        set<int> s;
        int n = nums1.size(), m = nums2.size(), i = 0 , j = 0 ;
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            i++;
            else if(nums1[i]>nums2[j])
            j++ ;
            else
            {
                s.insert(nums1[i]);
                
                i++;
                j++;
            }
        }
        for(auto x : s)
        v.push_back(x);
        return v;
    }
};