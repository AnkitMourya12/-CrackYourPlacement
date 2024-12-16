class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        int n=nums.size();
        int ans=0;
       while(k--){
        int mini=INT_MAX;
        int idx;
        for(int i=0;i<n;i++){
           if(mini>nums[i]){
            mini=nums[i];
            idx=i;
           }
        }
        nums[idx]=nums[idx]*mul;

       }
       return nums;
    }
};