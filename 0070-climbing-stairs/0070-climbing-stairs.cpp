vector<int>dp(46,-1);
class Solution {
public:
int solve(int n){
    if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        
        return dp[n]=solve(n-1)+solve(n-2);
}

    int climbStairs(int n) {
    // vector<int>dp(n+1,-1);
    return solve(n);
        
    }
};