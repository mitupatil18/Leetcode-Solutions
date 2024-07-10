class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0 , j = h.size()-1;
        int ans = 0 , mini = min(h[i],h[j]) ;
        while(i<j)
        {
            mini = min(h[i],h[j]) ;
            ans = max(ans,mini*(j-i));
            if(h[i]<h[j])
            {
                i++;
            }
            else
            j--;
        }
        return ans;
    }
};