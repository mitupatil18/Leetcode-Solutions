class Solution {
public:
    int minimumSum(int num) {
        vector<int> v ;
        int n1 = 0 , n2 = 0 , z = 1 ;
        while(num>0)
        {
            int d = num%10;
            cout<<d<<endl;
            v.push_back(d);
            num /= 10;
        }
        sort(v.begin(),v.end());
        for(int i = 0 ; i<v.size() ;i++)
        {
            if(i%2==0)
            n2 = n2*10+v[i];
            else
            n1 = n1*10+v[i];
        }
        cout<<n1<<" "<<n2<<endl;
        return n1+n2;
    }
};