class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0)
        return false;
        else if(n==1 || n==3 || n==9)
        return 1;
        else if(n%9!=0)
        return 0;
        return isPowerOfThree(n/9);
    }
};