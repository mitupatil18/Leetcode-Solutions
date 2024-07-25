class Solution {
public:
    void mergeSort(vector<int>& arr , int l , int h)
    {
        if(l==h)
        return ;
        int mid = (l+h)/2 ;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, h);
        merge(arr, l , mid , h) ;
    }
    void merge(vector<int>& arr , int l , int mid , int h)
    {
        vector<int> temp ;
        int left = l ;
        int right = mid+1 ;
        while(left<=mid && right<=h)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++ ;
            }
            else
            {
                temp.push_back(arr[right]);
                right++ ;
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++ ;
        }
        while(right<=h)
        {
            temp.push_back(arr[right]);
                right++ ;
        }
        for(int i = 0 , j = l ; i<temp.size() ; i++,j++)
        {
            arr[j] = temp[i] ;
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums ;
    }
};