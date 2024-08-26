class Solution {
public:

void helper(vector<int>& candidates,vector<int>&cur,int idx,int tar,vector<vector<int>>&res){
    if(tar<0){
        return;
    }
    if(tar==0){
        res.push_back(cur);
        return;
    }

    for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1]){
            continue;
        }
        cur.push_back(candidates[i]);
        helper(candidates,cur,i+1,tar-candidates[i],res);
        cur.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>cur;
        sort(begin(candidates),end(candidates));
        helper(candidates,cur,0,target,res);
        return res;
        
    }
};