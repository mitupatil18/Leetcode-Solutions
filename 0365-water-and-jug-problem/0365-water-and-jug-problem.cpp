class Solution {
public:
    bool canMeasureWater(int x, int y, int t) {
        if(x+y<t)
        return false ;
        while(x!=y)
        {
            if(x>y)
            x = x-y ;
            else
            y = y-x ;
        }
        return t%x==0 ;
    }
};