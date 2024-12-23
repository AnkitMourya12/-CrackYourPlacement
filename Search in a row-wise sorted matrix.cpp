class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        for(vector<int> &v:mat)
            if(binary_search(v.begin(), v.end(), x))
                return true;
        
        return false;
    
