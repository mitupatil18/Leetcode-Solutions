class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0 ;
        vector<int> v;
        for(int i = 0 ; i<bank.size() ; i++)
        {
            int one = 0 , zero = 0;
            for(int j = 0 ; j<bank[i].size() ; j++)
            {
                if(bank[i][j]=='0')
                zero++ ;
                else
                one++ ;
            }
            if(one>0)
            v.push_back(one);
        }
        if(v.size()==0)
        return 0 ;
        for(int i = 0 ; i<v.size()-1;i++)
        {
            ans += (v[i]*v[i+1]);
        }
        return ans ;
    }
};