class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n=nums.size();
        vector<int> v(n,-1);
        for(int i = 2*n-1 ; i>=0 ;i--)
        {
            while(!s.empty())
            {
                if(s.top()>nums[i%n])
                break;
                s.pop();
            }
            if(!s.empty())
            {
                v[i%n] = s.top();
            }
            s.push(nums[i%n]);
        }

        return v;
    }
};