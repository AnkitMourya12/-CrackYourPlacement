class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int c=0;

        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i]+nums[i-1];
        }

        for(int i=0;i<nums.size();i++){
           int diff=nums[i]-goal;
           if(mp.find(diff)!=mp.end()){
              c+=mp[diff];
           }
            mp[nums[i]]++;
        }
       
        return c;
    }
};