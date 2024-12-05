class Solution {
  public:
    void sort012(vector<int>& arr) {
        int c0=0,c1=0,c2=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                c0++;
                
            }
            else if(arr[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        int k=0;
        for(int i=0;i<c0;i++){
            arr[k]=0;
            k++;
        }
        for(int i=0;i<c1;i++){
            arr[k]=1;
            k++;
        }
        for(int i=0;i<c2;i++){
            arr[k]=2;
            k++;
        }
        
        
        // code here
    }
};
