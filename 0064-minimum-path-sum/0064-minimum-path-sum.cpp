class Solution {
public:
int n,m;
int dp[201][201];
int solve(vector<vector<int>>& grid,int i,int j){
    if(n-1==j && m-1==i) return grid[i][j];
    if(dp[i][j]!=-1) return dp[i][j];

    else if(m-1==i) 
         return dp[i][j]=grid[i][j]+solve(grid,i,j+1);
     else if(n-1==j) 
          return dp[i][j]=grid[i][j]+solve(grid,i+1,j);
    
    else 
    return dp[i][j]=grid[i][j]+min(solve(grid,i+1,j),solve(grid,i,j+1));

}
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        m=grid.size();
        n=grid[0].size();
        return solve(grid,0,0);
        
        
    }
};