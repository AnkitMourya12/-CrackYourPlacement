class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int l_max=0;
        int r_max=0;
        int i=0;
        int j=arr.size()-1;
        int ans=0;
        while(i<j){
            if(arr[i]<=arr[j]){
            if(arr[i]>l_max){
                l_max=arr[i];
            }
            else{
                ans+=l_max-arr[i];
                i++;
            }
        
        }
        else{
            if(arr[j]>r_max){
                r_max=arr[j];
            }
            else{
                ans+=r_max-arr[j];
                j--;
            }
            
        }
      }
      return ans;
    }
};
