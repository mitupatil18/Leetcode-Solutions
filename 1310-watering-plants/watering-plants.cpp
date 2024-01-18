class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
        int cnt = 0 , n = p.size(), amt = c ;
        for(int i = 0 ; i<n ;i++)
        {
            if(p[i]>amt)
            {
                cnt += (i*2) ;
                cnt++ ;
                amt = c-p[i] ; 
            }
            else
            {
                cnt++ ;
                amt -= p[i] ;
            }
        }
        return cnt ;
    }
};