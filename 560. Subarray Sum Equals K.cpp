class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        mp[0]=1;
        int c=0;

        //vector<int>sums;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            //sums.push_back((sum));
            if(mp.find(sum-k)!=mp.end()){
                c=c+mp[sum-k];
                
            }
            mp[sum]++;
        }
        
return c;
        
        
    }
};
