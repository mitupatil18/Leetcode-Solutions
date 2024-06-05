class Solution {
public:
    vector<string> commonChars(vector<string>& w) {
        string s ;
        vector<string> v;
        int size = INT_MAX , n = w.size() ;
        for(int i = 0; i<n ;i++)
        {
            if(w[i].size()<size)
            {
                size = w[i].size();
                s = w[i] ;
            }
        }
         for(int i = 0; i < s.size(); i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                size_t pos = w[j].find(s[i]);
                if(pos != string::npos) {
                    cnt++;
                    w[j].erase(pos, 1); 
                }
            }
            if(cnt == n) {
                string z;
                z.push_back(s[i]);
                v.push_back(z);
            }
        }
        return v;
    }
};