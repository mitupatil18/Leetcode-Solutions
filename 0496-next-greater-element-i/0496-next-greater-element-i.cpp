class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        map<int,int> m;
        int j = nums2.size()-1;
        while(j>=0)
        {
           while(!s.empty() && s.top()<nums2[j])
            {
                s.pop();
            }
            if(!s.empty())
            m[nums2[j]] = s.top();
            else
            m[nums2[j]] = -1;
            s.push(nums2[j]);
            j--;
        }
        for(int i = 0 ; i<nums1.size();i++)
        nums1[i] = m[nums1[i]];
        return nums1;
    }
};