class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>>adj;
int n=isConnected.size();
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(isConnected[i][j]==1){
        adj[i].push_back(j);
        adj[j].push_back(i);
        }
    }
}
vector<bool>vis(n,0);
    
   int c=0;
    for(int i=0;i<n;i++){
         if(!vis[i]){
             c++;
            queue<int>q;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int u=q.front();
                q.pop();
                for(auto x:adj[u]){
                    if(!vis[x]){
                        vis[x]=1;
                        q.push(x);
                        //c=c+1;
                    }
                }
            }
            
           // res+=(c-1)*static_cast<long>(c_road)+static_cast<long>(c_lib);
            
            
        }
    }
    return c;
    }
};