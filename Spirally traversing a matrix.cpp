class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &arr) {
        // code here
        // vector<int>ans;
        // int n=mat.size();
        // int m=mat[0].size();
        // int i,j,k,l,o,r;
        // // if(n>=m) r=n/m;
        // // r=m/n;
        // for(i=0;i<n-i;i++){
        //     for(j=i;j<m-i;j++){
        //         ans.push_back(mat[i][j]);
        //     }
        //     for(k=i+1;k<n-i;k++){
        //         ans.push_back(mat[k][j-1]);
        //     }
        //     for(l=j-2;l>=i;l--){
        //         ans.push_back(mat[k-1][l]);
        //     }
        //     for(o=k-2;o>i;o--){
        //         ans.push_back(mat[o][l+1]);
        //     }
        // }
        // return ans;
        
         int n = arr.size();
        int m = arr[0].size();
        int down=n-1;
        int top=0;
        int left = 0;
        int right = m-1;
        int dir=0;

        vector<int>v;
        while(left<=right&&top<=down){
            if(dir==0){
                for(int i = left;i<=right;i++){
                    v.push_back(arr[top][i]);
                }
                top++;
            }
            else if(dir==1){
                for(int i = top;i<=down;i++){
                    v.push_back(arr[i][right]);
                }
                right--;
            }
            else if(dir==2){
                for(int i = right;i>=left;i--){
                    v.push_back(arr[down][i]);
                }
                down--;
            }
            else{
                for(int i =down;i>=top;i--){
                    v.push_back(arr[i][left]);
                }
                left++;
            }
            dir+=1;
            dir=dir%4;
        }
        return v;
    }
};
