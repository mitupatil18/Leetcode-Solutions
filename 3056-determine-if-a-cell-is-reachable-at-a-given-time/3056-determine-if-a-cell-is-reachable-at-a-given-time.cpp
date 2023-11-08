class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int a = abs(sx-fx) , b = abs(sy-fy);
        int ans = min(a,b)+abs(a-b);
        if(ans==0)
        {
            if(t!=1)
            return 1 ;
            else
            return 0 ;
        }
        return t>=ans;
    }
};