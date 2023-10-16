//can be space optimized
//refer to solutions for better understanding
class Solution 
{
public:
    int numWays(int steps, int arrlen) 
    {
        //simple math
        arrlen=min(arrlen,(steps/2)+1);

        if(arrlen==1)
        {
            return 1;
        }

        //dp[i][j] means we have made i steps and are currently at jth poistion
        //dp[i][j] denotes the number of ways to reach the jth position using i steps
        vector<vector<int>> dp(steps,vector<int> (arrlen));

        //base cases(when only 1 step is taken)
        dp[0][0]=1;
        dp[0][1]=1;

        for(int i=1;i<steps;i++)
        {
            for(int j=0;j<arrlen;j++)
            {
                //stay
                dp[i][j]+=dp[i-1][j];
                dp[i][j]%=1000000007;

                //move right
                if(j!=0)
                {
                    dp[i][j]+=dp[i-1][j-1];
                    dp[i][j]%=1000000007;
                }

                //move left
                if(j!=arrlen-1)
                {
                    dp[i][j]+=dp[i-1][j+1];
                    dp[i][j]%=1000000007;
                }
            }
        }

        return dp[steps-1][0];
    }
};