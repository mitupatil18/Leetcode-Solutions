#include<bits/stdc++.h>
class Solution {
public:
    long long int find(int n , int r)
    {
        long long int ans = 1;
        for(int i = 0 ; i<r; i++)
        {
            ans *= (n-i);
            ans /= (i+1);
        }
        return ans;
    }
    vector<int> getRow(int n) {
        vector<int> ans ;
        for(int i = 0 ; i<=n ; i++)
        ans.push_back(find(n,i));
        return ans ;
    }
};