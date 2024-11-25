class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int max_pro=arr[0];
        int cur_max=arr[0];
        int cur_min=arr[0];
        
        int cur_pro=INT_MIN;
        
        for(int i=1;i<arr.size();i++){
            int temp=max({arr[i],arr[i]*cur_max,arr[i]*cur_min});
            cur_min=min({arr[i],arr[i]*cur_max,arr[i]*cur_min});
            cur_max=temp;
            max_pro=max(max_pro,cur_max);
        }
        return max_pro;
    }
};
