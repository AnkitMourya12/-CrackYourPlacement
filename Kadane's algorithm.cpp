class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
        int n=arr.size();
            //long long maxi=INT_MIN;
            long long  sum=0;
           long long  maxi=arr[0];
            for(int i=0;i<n;i++) {
                sum=sum+arr[i];
                maxi=max(maxi,sum);
                if(sum<0){
                    sum=0;
                }
            }
                return maxi;
    }
    
};
