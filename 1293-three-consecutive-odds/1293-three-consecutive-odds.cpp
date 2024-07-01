class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans  = 0 ;
        for(int i = 0 ; i<arr.size();i++)
        {
            if(arr[i]%2!=0)
            ans++;
            else
            ans = 0;
            if(ans==3)
            return 1;
        }
        return 0;
    }
};