class Solution {
public:
    void dfs(int node, vector<int>adj[] , int vis[]){
        vis[node] = 1;
        
        for(auto nbr : adj[node]){
            if(!vis[nbr]){
                dfs(nbr , adj , vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& Adj) {
        
        int e = Adj.size();
        if(e < n-1) return -1;
        
        vector<int>adj[n];
        
        for(auto it : Adj){
            int u = it[0] , v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        
        int cc = 0;
        int vis[n];
        memset(vis , 0 , sizeof vis);
        for(int i = 0 ; i < n; i++){
            if(!vis[i]){
                dfs(i , adj,  vis);
                cc++;
            }
        }
        return cc-1;
    }
};