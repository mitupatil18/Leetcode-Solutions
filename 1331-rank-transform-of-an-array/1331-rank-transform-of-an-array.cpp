class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans, temp;
        set<int> s ;
        for(int i = 0 ; i<arr.size();i++)
        {
            s.insert(arr[i]);
        }
        for(auto& m : s)
        {
            temp.push_back(m);
        }
        sort(temp.begin(),temp.end());
        for(int i = 0 ; i<arr.size();i++)
        {
            int t = arr[i];
            int l = 0 , r = s.size()-1 , mid ;
            while(l<=r)
            {
                mid = (l+r)/2 ;
                if(temp[mid]==t)
                {
                    ans.push_back(mid+1);
                    break;
                }
                if(temp[mid]<t)
                l = mid+1 ;
                else 
                r = mid-1 ;
            }
        }
        return ans ;
    }
};