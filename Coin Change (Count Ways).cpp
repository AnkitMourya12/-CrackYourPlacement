
class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        // code here.
        int s=coins.size()+1;
        
        vector<vector<long>>dp(s,vector<long>(sum+1));
        for(int i=0;i<s;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<sum;i++){
            dp[0][i]=0;
        }
        
        for(int i=1;i<s;i++){
            for(int j=1;j<=sum;j++){
                if(j<coins[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
                }
            }
        }
        return dp[s-1][sum];
    }
};

