class Solution {
public:

static bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first==b.first){
          return a.second>b.second;
    }
  return a.first<b.first;

}
int LIS(vector<pair<int,int>>p){
    vector<int>dp;
    for(auto x:p){
        auto itr=lower_bound(dp.begin(),dp.end(),x.second);
        if(itr==dp.end()){
            dp.push_back(x.second);

        }
        else if(*itr>x.second){
            *itr=x.second;
        }
    }
    return dp.size();
}

    int maxEnvelopes(vector<vector<int>>& enp) {
        vector<pair<int,int>>p;

        for(int i=0;i<enp.size();i++){
            p.push_back({enp[i][0],enp[i][1]});
        }
        sort(p.begin(),p.end(),cmp);
        return LIS(p);
        
    }
};