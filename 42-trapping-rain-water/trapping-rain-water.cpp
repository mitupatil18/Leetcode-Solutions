class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size(), i = 0 , j = n-1,level = 0 , total = 0 ;
        while(i<=j)
        {
            if(h[i]>h[j])
            {
                level = max(level,h[j]);
                total += level - h[j--];
            }
            else
            {
                level = max(level,h[i]);
                total += level - h[i++];
            }
        }
        return total;
    }
};