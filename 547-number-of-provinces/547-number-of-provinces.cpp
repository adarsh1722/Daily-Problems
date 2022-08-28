class Solution {
public:
    void dfs(int node  , vector<vector<int>>& isConnected , vector<int>&vis){
        
        vis[node] = 1;
        
        for(int i = 0 ; i < isConnected.size() ; i++){
            
            if(!vis[i] && isConnected[node][i]){
                dfs(i , isConnected , vis);
            }
            
        }
        
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        int provinces = 0;
        
        vector<int>vis(n ,0);
        for(int i = 0 ; i < n ; i++){
            
            if(!vis[i]){
                dfs(i , isConnected , vis);
                provinces++;
            }
          
        }
        
        return provinces;
        
        
    }
};