class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        vector<int>arr1;
       // if(arr.size())
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans=ans+arr[i];
            arr1.push_back(ans);
        }
        
         vector<int>arr2;
       // if(arr.size())
         ans=0;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            ans=ans+arr[i];
            arr2.push_back(ans);
            
        }
        reverse(begin(arr2),end(arr2));
        
        //int n=arr.size();
        
        for(int i=0;i<n;i++){
           if(arr1[i]==arr2[i])
           return i;
        }
        return -1;
    }
};
