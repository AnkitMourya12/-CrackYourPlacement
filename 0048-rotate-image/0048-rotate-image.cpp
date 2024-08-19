class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i=0;i<row;i++)
        {
        for(int j=i+1;j<col;j++)
        {
           int t=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=t;
        }
             
        }
        for(int i=0;i<row;i++)
        {
            int left=0;
            int right=matrix[i].size()-1;
            while(left<=right)
            {
                int t= matrix[i][left];
                 matrix[i][left]=matrix[i][right];
                 matrix[i][right]=t;
                 left++;
                 right--;
            }


        }
        }

        



       
        
    
};