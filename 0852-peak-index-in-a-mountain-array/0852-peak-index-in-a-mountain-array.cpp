class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        map<int, int, greater<int> > mp ;
        int i = 0 ;
        for( ; i<arr.size() ; i++)
        {
            mp[arr[i]] = i ;;
        }
        auto it = mp.begin() ;
        int x = (*it).second;
        return x ;
    }
};