class Solution {
public:
    string removeOccurrences(string s, string part) {
        int size = part.size();
        while(s.find(part) != string::npos) {
            int i = s.find(part);
            s.erase(i, size);  
        }
        return s;
    }
};
