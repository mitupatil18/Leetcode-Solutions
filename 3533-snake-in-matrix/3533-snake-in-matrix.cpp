class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& c) {
        int i = 0 , j = 0 ;
        for(int x = 0 ; x<c.size();x++)
        {
            if(c[x]=="UP")
            i--;
            else if(c[x]=="DOWN")
            i++;
            else if(c[x]=="RIGHT")
            j++;
            else
            j--;
        }
        return (i*n)+j;
    }
};