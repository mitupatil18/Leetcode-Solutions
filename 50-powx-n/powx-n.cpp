class Solution {
public:
    double myPow(double x , int n) {
        if(n==0)
        return double(1);
        double ans=myPow(x,n/2);
        if(n%2==0)
        ans=ans*ans;
        else
        {
            if(n>0)
            ans=(x*ans*ans);
            else
            ans=(ans*ans)/x;
        }
        return ans;
    }
};