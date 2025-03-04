class Solution {
public:
    int coinChange(vector<int>& c, int n) {
        int r=c.size()+1;
        int col=n+1;
    //int col=n+1;
    
    
    // vector<int>dp(r+1,vector<int>(n+1,0));
    vector<vector<int>> dp(r , vector<int>(col));
     for(int i=1;i<col;i++){
     dp[0][i]=n+1;
  }

    //dp[0][0]=1;
    for(int i=0;i<r;i++){
        dp[i][0]=0;
    }
    //int x=-1;
 
  
  for(int i=1;i<r;i++){
      for(int j=1;j<col;j++){
          if(j<c[i-1]){
              dp[i][j]=dp[i-1][j];
          }
          else{
              dp[i][j]=min(dp[i-1][j],1+dp[i][j-c[i-1]]);
          }
          
      }
  }
  if(dp[r-1][col-1]>n) return -1;

  return dp[r-1][col-1];
    }
};