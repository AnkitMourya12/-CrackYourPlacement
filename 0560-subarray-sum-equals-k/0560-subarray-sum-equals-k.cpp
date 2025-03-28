class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
         mp[0]=1;
        int c=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(mp.find(sum-k)!=mp.end()){
                c=c+mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    }
};