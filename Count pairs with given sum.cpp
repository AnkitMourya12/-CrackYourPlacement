class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int ans=0;
        for(auto x:arr){
            mp[x]--;
            ans+=mp[target-x];
        }
        return ans;
    }
};
