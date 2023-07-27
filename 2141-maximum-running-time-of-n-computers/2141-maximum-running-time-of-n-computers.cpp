class Solution {
public:
    long long maxRunTime(int n, vector<int>& a) {
        long long sum = 0  , ans = 0;
        for(int i = 0 ; i<a.size() ; i++)
            sum += a[i] ;
        sort(a.begin(),a.end());
        long long r = sum/n + 1;
        long long l = a[a.size()-n];
        while(l<r)
        {
            long long mid = (l+r)/2 ;
            int k = a.size()-1 ;
            while(k>=0 && a[k]>=mid)
            k-- ;
            int rem = n-(a.size()-1-k);
            long long temp = 0 ;
            while(k>=0)
            {
                temp += a[k];
                k--;
            }
            if(rem<=0 || rem*mid<=temp)
            {
                ans = max(ans,mid);
                l = mid+1 ;
            }   
            else
                r = mid ;
        }
        return ans ;
    }
};