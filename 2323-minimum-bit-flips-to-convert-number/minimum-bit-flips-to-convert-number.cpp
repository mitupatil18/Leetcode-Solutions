class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = 1, cnt = 0 ;
        while(n<=max(goal,start))
        {
            if((n&start)!=(n&goal))
            cnt++;
            n = n<<1 ;
        }
        return cnt;
    }
};