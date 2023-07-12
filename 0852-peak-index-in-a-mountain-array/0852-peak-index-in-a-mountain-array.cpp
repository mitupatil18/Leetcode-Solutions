class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = arr[0] ;
        int i = 1 ;
        for( ; i<arr.size() ; i++)
        {
            if(arr[i]>max)
                max = arr[i];
            else
                return i-1 ;
        }
       return -1;
    }
};