class Solution {
public:
    string find(int n)
    {
        string s;
        while(n>0)
        {
            int r = n%2;
            s.push_back(r+48);
            n /= 2;
        }
        reverse(s.begin(),s.end());
        for(int i = 0 ; i<s.size();i++)
        {
            if(s[i]=='0')
            s[i] = '1';
            else
            s[i] = '0';
        }
        cout<<s<<endl;
        return s;
    }
    int findComplement(int num) {
        string ans = find(num);
        int r = stoi(ans, 0, 2);
        return r;
    }
};