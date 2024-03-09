class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 , j = 0, ans = -1  ;
        while( i<nums1.size() && j<nums2.size())
        {
            if( i<nums1.size() && j<nums2.size() && nums1[i]==nums2[j]  )
            {
                ans = nums1[i];
                break;
            }
            while( i<nums1.size() && nums1[i]<nums2[j] )
            i++ ;
            while( j<nums2.size() && nums1[i]>nums2[j] )
            j++ ;
        }
        return ans;
    }
};