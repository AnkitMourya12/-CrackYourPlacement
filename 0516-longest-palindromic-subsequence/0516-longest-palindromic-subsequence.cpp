class Solution {
public:
int dp[1001][1001];
int solve(string &s1,string &s2,int m,int n){
    if(m==0 || n==0)
        return dp[m][n]=0;

    if(dp[m][n]!=-1)
        return dp[m][n];

    if(s1[m-1]==s2[n-1]) 
        return dp[m][n]=1+solve(s1,s2,m-1,n-1);
    
    return dp[m][n]=max(solve(s1,s2,m,n-1),solve(s1,s2,m-1,n));

}
    int longestPalindromeSubseq(string s1) {
        memset(dp,-1,sizeof(dp));
        string s2=s1;
         reverse(begin(s2),end(s2));
        int m=s2.length();

        return solve(s1,s2,m,m);
    }
};