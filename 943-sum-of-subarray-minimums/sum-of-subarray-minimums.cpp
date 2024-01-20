class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int a[n];
        long long ans = 0;
        long long temp = 0;
        int r=1;
        int last = -1;
        for(int i=n-1; i>=0; i--)
        {
            if (arr[i]<=last) r++;
            else r = 1; 
            last = arr[i];
            a[i] = r;
        }
        cout << a[0] << endl;
        for(int i=0; i<n; i++)
        {
            if (i && arr[i-1]>arr[i])
            {
                temp -= arr[i-1];
            } 
            else
            {
            temp = 0;
            int mini = INT_MAX;
            for(int j=i; j<n; j+=a[j])
            {
                mini = min(mini,arr[j]);
                temp += mini*a[j];
            }
            }
            ans = (ans + temp) % 1000000007;
         }
        return ans;
    }
};