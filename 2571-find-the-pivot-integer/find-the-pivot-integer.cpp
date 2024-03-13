class Solution {
public:
    int pivotInteger(int n) {
        int x = 0 , y = 0, ans = 0 ;
        for(int i = 1 ; i<=n ;i++)
        y += i ;
        int i = 1;
        while(y>0)
        {
            x+= i ;
            if(x==y)
            return i ;
            y -= i;
            i++;
        }
        return -1;
    }
};