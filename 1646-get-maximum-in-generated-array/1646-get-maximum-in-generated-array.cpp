class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0 ;
        vector<int> v(101,0);
        v[0] = 0 ;
        v[1] = 1 ;
        for(int i = 1 ; i<=n ; i++)
        {
            if(i*2<=n)
            v[i*2] = v[i];
            if(2*i +1 <=n)
            v[(i*2)+1] = v[i]+v[i+1];
        }
        sort(v.begin(),v.end(),greater<int>());
        return v[0] ;
    }
};