class Solution {
public:

int N;
int mod=1e9+7;
int dp[101][101][101];
    int solve(int i,int p,int people,int &minProfit, vector<int>& group, vector<int>& profit ){
        if(people>N) return 0;
        if(i==group.size()){
            if(p>=minProfit) return 1;

            return 0;
        }
        if(dp[i][p][people]!=-1) return dp[i][p][people];

        long long nt=solve(i+1,p,people,minProfit,group,profit)%mod;
        long long take=solve(i+1,min(p+profit[i],minProfit),people+group[i],minProfit,group, profit)%mod;
        return dp[i][p][people]=(nt+take)%mod;

    }

    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        N=n;
        memset(dp,-1,sizeof(dp));
        return solve(0,0,0,minProfit,group,profit);
    }
};