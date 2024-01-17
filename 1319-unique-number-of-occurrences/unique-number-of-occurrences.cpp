class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt = 1;
        set<int> s;
        for(int i = 0 ; i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            cnt++ ;
            else
            {
                if(s.find(cnt)==s.end())
                s.insert(cnt);
                else
                return false;
                cnt = 1 ;
            }
        }
        if(s.find(cnt)==s.end())
            s.insert(cnt);
        else
            return false;
        return true;
    }
};