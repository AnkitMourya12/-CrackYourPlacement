class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        map<int,int>mp;
        
        int n=arr.size();
        int sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=arr[i];
        //     arr[i]=sum;
        // }
        mp[0]=1;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int diff=sum-k;
            if(mp.find(diff)!=mp.end()){
                ans+=mp[diff];
               // mp[diff]++;
            }
            mp[sum]++;
        }
        return ans;
    }
};
