class Solution {
public:
    int search(vector<int>& A, int key) {
        int l = 0 , h = A.size()-1;
        if(A[l] == key) return l;
        if(A[h] == key) return h;

        while(l<h)
        {
            if(A[l]<key && A[h]<key)
              h--; l++;
        if(A[l] == key) return l;
        if(A[h] == key) return h;
        }
        return -1;
    }
};