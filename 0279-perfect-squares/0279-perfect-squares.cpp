class Solution {
public:
int arr[10001];

int helper(int n){
    if(n==0){
        return 0;
    }
    if(arr[n]!=-1){
        return arr[n];
    }

    int minCount=INT_MAX;
    for(int i=1;i*i<=n;i++){
        int res=1+helper(n-i*i);
        minCount=min(res,minCount);
    }
    return arr[n]=minCount;
}


    int numSquares(int n) {
        //int r;
//         vector<int> sq;
//    for(int i=1;i*i<=n;i++){
// sq.push_back(i*i);
//    }
//    int r=sq.size();


//         vector<vector<int>> dp(r + 1, vector<int>(n + 1, 10000));
//         for(int i=0;i<r;i++){
//             dp[i][0]=0;
//         }
//         //dp[0][0] = 1;
//         for(int i=1;i<n;i++){
//             dp[0][i]=0;
//         }

//         for (int i = 1; i <=r; i++) {
//             for (int j = 0; j < n; j++) {
//                if(j<sq[i-1]){
//                 dp[i][j]=dp[i-1][j];
//                }

//                else{
//                 dp[i][j]=min(dp[i-1][j], dp[i][j-sq[i-1]]+1);
//                }
//             }
//         }
//         return dp[r][n];
         memset(arr,-1,sizeof(arr));
          return helper(n);

        
    }
};