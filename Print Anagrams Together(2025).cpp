class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        map<string,vector<string>>mp;
        
        for(auto x:arr){
            string t=x;
            sort(begin(x),end(x));
            if(mp.find(x)!=mp.end()){
                mp[x].push_back(t);
            }
            else{
                mp[x].push_back(t);
            }
        }
            
            vector<vector<string>>ans;
            for(auto &x:mp){
                vector<string>d=x.second;
                //sort(begin(d),end(d));
                ans.push_back(d);
            }
        
        return ans;
    }
};
