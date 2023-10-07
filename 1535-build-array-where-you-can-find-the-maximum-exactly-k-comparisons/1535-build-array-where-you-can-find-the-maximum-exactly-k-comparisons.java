class Solution {
    private static final int MOD = 1_000_000_007;
    int[][][] memo;
    public int numOfArrays(int n, int m, int k) {
        memo = new int[n + 1][k + 1][m + 1];
        return helper(n, m, k, 0);
    }
    int helper(int n, int m, int k, int max){
        if(k < 0){
            return 0;
        }
        if(n < k){
            return 0;
        }
        if(n == 0){
            return 1;
        }
        if(memo[n][k][max] != 0){
            return memo[n][k][max] - 1;
        }
        int total = 0;
        for(int i = 1; i <= m; i++){
            total += helper(n - 1, m, i > max ? k - 1 : k, Math.max(i, max));
            total %= MOD;
        }
        memo[n][k][max] = total + 1;
        return total;
    }
}