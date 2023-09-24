class Solution {
public:
    vector<vector<int>> adj ; 
    vector<int> vis;  int n ; 
    void dfs(int node){
        for(int i = 0 ; i<n;i++){
            if(adj[node][i] && !vis[i]){
                vis[i]++; 
                dfs(i); 
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size() ;  int cnt = 0 ; 
        adj = isConnected; vis.resize(n) ;
        for(int i = 0 ; i < n ; i++){
            if(!vis[i]) vis[i]++ , cnt++ , dfs(i); 
        }
        return cnt; 
    }
};