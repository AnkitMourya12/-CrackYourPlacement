class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       
        vector<int>row;
        vector<int>coulam;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    coulam.push_back(j);
                    }

                }
                
        }
        for(int i=0;i<row.size();i++){
            int idx=row[i];
            for(int j=0;j<matrix[0].size();j++){
                
                    matrix[idx][j]=0;
                } 
                
        }

        for(int i=0;i<coulam.size();i++){
            int idx=coulam[i];
            for(int j=0;j<matrix.size();j++){
                
                    matrix[j][idx]=0;
                }
                
        }
       
    }
};
