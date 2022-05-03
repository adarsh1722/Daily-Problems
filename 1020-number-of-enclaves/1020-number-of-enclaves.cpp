class Solution {
public:
    bool dfs(int i , int j , vector<vector<int>>&grid , vector<vector<int>>&vis , int&size){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
            return true;
        }
        if(grid[i][j] == 0){
            return false;
        }
        if(vis[i][j] == 1){
            return false;
        }
        vis[i][j] = 1;
        size+=1;
        int d = dfs(i+1 , j , grid,vis ,size);
        int u = dfs(i-1 , j , grid,vis ,size);
        int r = dfs(i , j+1 , grid,vis ,size);
        int l = dfs(i , j-1 , grid,vis ,size);
        if(d == true || r == true || l == true || u == true){
            return true;
        }
        return false;
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        vector<vector<int>>vis(n ,vector<int>(m , 0));
        int ans = 0;
        for(int i = 0  ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    int size = 0;
                    if(!dfs(i , j , grid , vis , size)){
                        ans += size;
                        
                    }
                }
                                
            }
        }
        return ans;
    }
};