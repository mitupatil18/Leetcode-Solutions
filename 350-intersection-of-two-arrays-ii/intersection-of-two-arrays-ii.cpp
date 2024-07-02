class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0 , j = 0, n = nums1.size(), m = nums2.size() ;
        while(i<n && j<m)
        {
            while(i<n && nums1[i]<nums2[j])
            i++;
            while(j<m && nums1[i]>nums2[j])
            j++;
            if(i<n && j<m && nums1[i]==nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return v;
    }
};