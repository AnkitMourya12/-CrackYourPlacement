class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
if(source==target){
    return 0;
}

        unordered_map<int,vector<int>>adj;

        for(int i=0;i<routes.size();i++){
            for(auto x:routes[i]){
                adj[x].push_back(i);
            }
        }
        queue<int>q;
        vector<bool>visited(501,false);
        for(auto &idx:adj[source]){
            q.push(idx);
            visited[idx]=true;
        }
        int c=1;
        while(!q.empty()){
            int size=q.size();

            while(size--){
                int idx=q.front();
                q.pop();
                for(auto &stop:routes[idx]){
                    if(stop==target){
                        return c;
                    }

                    for(auto &rout:adj[stop]){
                        if(visited[rout]==false){
                            visited[rout]=true;
                            q.push(rout);
                        }
                    }
                }
            }
            c++;
        }
        return -1;
    }
};