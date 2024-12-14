class Solution {
public:
int n;
 
const int mod=1e9+7;
int solve(int strt,string &s,int& k,vector<int>&dp){
    if(strt>=n) return 1;
    if(dp[strt]!=-1)
    return dp[strt];

    if(s[strt]=='0') return dp[strt]=0;

    long ans=0;
    long long num=0;
    for(int end=strt;end<n;end++){
        num=(num*10)+(s[end]-'0');
        if(num>k)
        break;
        ans=(ans%mod+solve(end+1,s,k,dp)%mod)%mod;
    }
    return dp[strt]=ans;
}
    int numberOfArrays(string s, int k) {
        n=s.size();
       vector<int>dp(n,-1);
        return solve(0,s,k,dp);
    }
};