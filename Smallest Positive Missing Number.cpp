class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n =arr.size();
        sort(arr.begin(),arr.end());
        int ans = 1;
        
        for(int i=0;i<n;i++){
            if(arr[i]==ans){
                ans++;
            }
        }
        return ans;
    }
};
