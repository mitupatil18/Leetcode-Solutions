class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int i = 0 , j = n-1, ans = 0 ;
        while(i<j)
        {
            int ca = min(h[i],h[j])*(j-i);
            ans = max(ans,ca);
            if(h[i]<h[j])
            i++;
            else
            j--;
        }
        return ans;
    }
};