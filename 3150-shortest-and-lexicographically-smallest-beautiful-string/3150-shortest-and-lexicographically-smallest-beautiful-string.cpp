class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i=0,j=0,count=0;
        int minl=INT_MAX;
        string ans="";
        while(j<s.length())
        {
            if(s[j]=='1')count++;
            
            if(count==k)
            {
                
                while(count==k)
                {
                    string t=s.substr(i,j-i+1);
                    if(t.length()<minl)
                    {
                        minl=t.length();
                        ans=t;
                    }
                    else if(t.length()==ans.length())ans=min(ans,t);
                        
                    if(s[i]=='1')
                    {
                        count--;
                    }
                    i++;
                }              
            }
            j++;
        }
        return ans;
    }
};