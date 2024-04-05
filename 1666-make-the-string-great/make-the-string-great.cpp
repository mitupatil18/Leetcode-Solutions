class Solution {
public:
    string makeGood(string s) {
        string z;
        while(1)
        {
            int cnt = 0 ;
            z = "" ;
            for(int i = 0 ; i<s.size() ;i++)
            {
                if(abs(s[i]-s[i+1])==32)
                {
                    i++;
                    cnt++;
                }
                else
                z.push_back(s[i]);
            }
            if(cnt==0 || z.size()==0)
            break;
            s = z;
        }
        return z;
    }
};