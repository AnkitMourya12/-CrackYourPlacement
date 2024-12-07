class Solution {
public:
int MOD=1e9+7;
int m;
int k;
int dp[1001][1001];
int solve(int i, int j, vector<vector<long long>>&freq,string &tar){
     if(i==m) return 1;
     if(dp[i][j]!=-1){
        return dp[i][j];
     }
     if(j==k) return 0;
     int not_take=solve(i,j+1,freq,tar)%MOD;
     int take=(freq[tar[i]-'a'][j]*solve(i+1,j+1,freq,tar))%MOD;
     return dp[i][j]=(not_take+take)%MOD;
}

    int numWays(vector<string>& words, string target) {
        memset(dp,-1,sizeof(dp));
         m=target.size();
         k=words[0].size();
        vector<vector<long long>>fre(26,vector<long long>(k));
        for(int col=0;col<k;col++){
            for(string &wo:words){
                char ch=wo[col];
                fre[ch-'a'][col]++;
            }
        }

        return solve(0,0,fre,target);
    }
};