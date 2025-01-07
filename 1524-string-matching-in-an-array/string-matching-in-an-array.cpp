class Solution {
public:
    vector<string> stringMatching(vector<string>& w) {
        vector<string> v;
        for(int i = 0 ; i<w.size();i++)
        {
            for(int j = 0 ; j<w.size();j++)
            {
                if(i==j)continue;
                if (w[j].find(w[i]) != string::npos) 
                {
                    v.push_back(w[i]);
                    break;
                }
            }
        }
        return v;
    }
};