class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = edges[0][0] , b = edges[0][1] , c = edges[1][0] , d = edges[1][1] ;
        int x  ;
        if(a==c || a==d)
        x = a ;
        else
        x = b ;
        return x;
    }
};