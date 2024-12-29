class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code hereun
        unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        vector<int>ans;
        for(auto &x:b){
            if(mp.find(x)!=mp.end() && mp[x]!=0){
                ans.push_back(x);
                mp[x]=0;
            }
            
        }
        return ans;
    }
};
