class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0 , te = 0 , tw = 0 ;
        for(auto x : bills)
        {
            if(x==5)
            f++;
            else if(x==10)
            {
                te++;
                if(f>0)
                f--;
                else
                return 0;
            }
            else
            {
                tw++;
                if(f>0 && te>0)
                {
                    f--;
                    te--;
                }
                else if(f>=3)
                f -= 3;
                else
                return 0;
            }
        }
        return 1;
    }
};