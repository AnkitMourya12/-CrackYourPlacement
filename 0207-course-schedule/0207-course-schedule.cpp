class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {

vector<int>adj[n];
vector<int>indegree(n,0);
queue<int>q;

for(auto x:p){
    adj[x[0]].push_back(x[1]);
    indegree[x[1]]++;
}

for(int i=0;i<n;i++){
    if(indegree[i]==0){
        q.push(i);
    }
}
vector<int>ans;
while(!q.empty()){
int t=q.front();
ans.push_back(t);
q.pop();
for(auto x:adj[t]){
    indegree[x]--;
    if(indegree[x]==0){
        
        q.push(x);
    }
}
}
return ans.size()==n;
        
    }
};