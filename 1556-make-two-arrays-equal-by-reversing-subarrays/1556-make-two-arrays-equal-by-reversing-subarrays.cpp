class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& arr) {
        int i = 0 , j = 0, n = arr.size();
        for(int i = 0 ; i<n;i++)
        {
            if(t[i]!=arr[i])
            {
                int x = i;
                while(x<n && t[i]!=arr[x])
                x++;
                if(x<n)
                reverse(arr.begin()+i,arr.begin()+x+1);
            }
        }
        bool ans = false;
        for(int i = 0 ; i<n;i++)
        {
            if(arr[i]!=t[i])
            return ans;
        }
        return true;
    }
};