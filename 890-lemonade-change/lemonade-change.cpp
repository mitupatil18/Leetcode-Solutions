class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int x = 0, y = 0 , z = 0 , n = b.size();
        for(int i = 0 ; i<n ;i++)
        {
            if(b[i]==5) x++;
            else if(b[i]==10)
            {
                y++;
                if(x<=0)
                return false;
                x--;
            }
            else
            {
                z++;
                if(!(x>=3 || (x>=1 && y>=1)))
                return false;
                if(y>0)
                {
                    y--;
                    if(x>0)
                    x--;
                }
                else if(x>=3)
                {
                    x -= 3;
                }
            }
        }
        return true;
    }
};