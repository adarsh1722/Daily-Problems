class Solution {
public:
    void dfs(int i , int  j , vector<vector<char>>&grid , vector<vector<int>>&vis){
        int n = grid.size() , m = grid[0].size();
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0' || vis[i][j]){
            return;
        }
        
        vis[i][j] = 1;
        
        dfs(i+1 , j , grid , vis);
        dfs(i-1 , j , grid , vis);
        dfs(i ,j+1 , grid , vis);
        dfs(i , j-1 , grid ,vis);
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        
        int n  = grid.size();
        int m = grid[0].size();
        
        int island = 0;
        
        vector<vector<int>>vis(n ,vector<int>(m , 0));
        
        for(int i = 0 ; i < n ; i++){
            for(int j =0 ; j < m ; j++){
                
                if(!vis[i][j] && grid[i][j] == '1'){
                    
                    dfs(i , j , grid , vis);
                    island+=1;
                    
                }
 
            }
        }
        return island;
        
    }
};