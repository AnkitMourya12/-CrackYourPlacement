class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int l=0;
        int h=n*m-1;
        int mid=0;
       while(l<=h){
           mid=(l+h)/2;
           int i=mid/m;
           int j=mid%m;
           int t=mat[i][j];
           if(t==x) return true;
           else if(t<x) l=mid+1;
           else h=mid-1;
       }
       return false;
    }
};
