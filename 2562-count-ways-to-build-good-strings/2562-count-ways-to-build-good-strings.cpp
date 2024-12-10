class Solution {
public:
int z,o;
int L,H;
int mod=1e9+7;
// int dp[10001];

int solve(int l,vector<int>&dp){
    if(l>H){
        return 0;
    }
    if(dp[l]!=-1) return dp[l];
    bool addone=false;
    if(l>=L && l<=H){
        addone=true;
    }
    int appnd_one=solve(l+o,dp);
    int appnd_zero=solve(l+z,dp);

    return dp[l]=(addone+appnd_one+appnd_zero)%mod;
}
    int countGoodStrings(int low, int high, int zero, int one) {
        // memset(dp,-1,sizeof(dp));
         z=zero;
         o=one;
         L=low;
         H=high;
         vector<int>dp(high+1,-1);
         return solve(0,dp);
    }
};