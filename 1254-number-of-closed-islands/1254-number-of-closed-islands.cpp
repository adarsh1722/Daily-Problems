class Solution {
public:
    bool dfs(int i , int j , vector<vector<int>>&grid){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
            return false;
        }
        
        if(grid[i][j] == 1){
            return true;
        }
        
        // mark it as visited;
        grid[i][j] = 1;
        
        int down  = dfs(i+1 , j , grid);
        int up    = dfs(i-1 , j , grid);
        int right = dfs(i , j+1 , grid);
        int left  = dfs(i , j-1 , grid);
        return down && up && right && left;
        
    }
    int closedIsland(vector<vector<int>>& grid) {
        
        int n = grid.size() , m = grid[0].size() , closedIslands = 0;
     
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 0){
                    if(dfs(i , j , grid)){
                        closedIslands++;
                    }
                }
                                
            }
        }
        return closedIslands;
        
    }
};