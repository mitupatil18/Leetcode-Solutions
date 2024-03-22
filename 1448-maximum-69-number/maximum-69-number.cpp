class Solution {
public:
    int reverse(int n)
    {
        int ans = 0 ;
        while(n>0)
        {
            int d = n%10;
            ans = ans*10+d;
            n /= 10;
        }
        return ans;
    }
    int maximum69Number (int num) {
        int n = reverse(num);
        cout<<n<<endl;
        int z = 1 , t = n, ind = -1;
        while(t>0)
        {
            int d = t%10;
            if(d==6)
            {
                ind = z ;
                break;
            }
            t /=10 ;
            z *= 10;
        }
        if(ind==-1)
        {
            
        }
        else{
            int m= z*10;
            int x = n%m;
            n = n/m;
            n = n*m+z*9+(x%z);
            cout<<n<<endl;
        }
        return reverse(n);
    }
};