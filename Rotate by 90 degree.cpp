class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        for(auto &vec:mat){
            reverse(vec.begin(),vec.end());
        }
        for(int i=0;i<mat.size();i++){
            for(int j=i;j<mat[0].size();j++){
                swap(mat[i][j],mat[j][i]);
            }
        }  
    }
};
