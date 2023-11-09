class Solution {
public:
    int countHomogenous(string s) {
        int i = 0 ;
        long long ans = 0 , cnt = 1 ,z ;
        while(i<s.size()-1)
        {
            if(s[i]==s[i+1])
            {
                cnt++ ;
            }
            else
            {
                z = ((cnt*(cnt+1))/2)%1000000007;
                ans = ans+z ;
                
                cnt = 1 ;
            }
            i++;
        }
         z = ((cnt*(cnt+1))/2)%1000000007;
        ans = (ans+z)%1000000007;
        return ans%(1000000007) ;
    }
};