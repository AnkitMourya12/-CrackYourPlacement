class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     
int ans;
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
         
    }
    for (auto itr = mp.begin(); itr != mp.end(); ++itr){
        if(itr->second>1){
           ans= itr->first;
           break;
        }
    }
    return ans;
    }

};
