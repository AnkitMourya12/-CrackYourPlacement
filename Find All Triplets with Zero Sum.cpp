class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
       // sort(begin(arr),end(arr));
         vector<vector<int>>ans;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        for(int i=0;i<=arr.size()-3;i++){
            int no1=arr[i];
            for(int j=i+1;j<arr.size();j++){
                int sum=no1+arr[j];
                int rem=0-sum;
                if(mp.find(rem)!=mp.end()){
                    for(int k=0;k<mp[rem].size();k++){
                        if(mp[rem][k]>j && mp[rem][k]!=j){
                            vector<int>a;
                            a.push_back(i);
                            a.push_back(j);
                            a.push_back(mp[rem][k]);
                            sort(a.begin(),a.end());
                            ans.push_back(a);
                        }
                        
                    }
                }
                
            }
            
        }
        return ans;
    }
};
