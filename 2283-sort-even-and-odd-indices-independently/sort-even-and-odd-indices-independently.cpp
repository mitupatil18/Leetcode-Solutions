class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> o, e;
        for(int i = 0 ; i<nums.size() ;i++)
        {
            if(i%2==0)
            e.push_back(nums[i]);
            else
            o.push_back(nums[i]);
        }
        sort(o.begin(),o.end(),greater<int>());
        sort(e.begin(),e.end());
        int i = 0 , j = 0 ;
        for(int k = 0 ; k<nums.size() ;k++)
        {
            if(k%2!=0)
            nums[k] = o[i++];
            else
            nums[k] = e[j++];
        }
        return nums;
    }
};