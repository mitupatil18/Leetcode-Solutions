class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        map<int,int> m;
        for(int i = nums2.size()-1 ; i>=0 ; i--)
        {
            while(!s.empty() && nums2[i]>=s.top())
            s.pop();
            if(!s.empty())
            m[nums2[i]] = s.top();
            else
            m[nums2[i]] = -1;
            s.push(nums2[i]);
        }
        for(int i = nums1.size()-1 ; i>=0 ; i--)
        {
            nums1[i] = m[nums1[i]] ;
        }
        return nums1;
    }
};