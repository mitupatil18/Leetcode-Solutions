class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        while(1)
        {
            int cnt = 0, n = a.size();
            for(int i = 0 ; i<a.size()-1 ;i++)
            {
                if(a[i][1]>=a[i+1][0])
                {
                    a[i+1][0] = a[i][0];
                    a[i+1][1] = max(a[i+1][1], a[i][1]) ;
                    a.erase(a.begin()+i);
                    cnt++ ;
                }
            }
            if(cnt==0)
            break;
        }
        return a ;
    }
};  