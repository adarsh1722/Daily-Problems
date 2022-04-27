class Solution {
public:
    
    void dfs(int start ,vector<int>adj[] , vector<int>&visited){
        
        visited[start] = 1;
        
        for(auto nbr : adj[start]){
            if(!visited[nbr]){
                dfs(nbr , adj , visited);
            }
        }
        
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
      
        int edges  =  connections.size();
        if(edges < n-1){
            return -1;
        }
        
        vector<int>adj[n];
        
        for(auto e : connections){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<int>visited(n);
        int connected = 0 ;
        for(int i  = 0 ; i < n ; i++){
            if(!visited[i]){
                dfs(i , adj , visited);
                connected++;
            }
        }
        
        return connected-1;
        
    }
};