class Solution {
public:
    
    void dfs(int i , int j , vector<vector<int>>&grid , int &cnt){
        
        if(i < 0 || i == grid.size() || j < 0 || j == grid[0].size()  || grid[i][j] == 0)
            return;
        
        grid[i][j] = 0;
        cnt++;
        
        dfs(i-1, j,  grid, cnt);
        dfs(i+1, j, grid, cnt);
        dfs(i, j-1,  grid, cnt);
        dfs(i, j+1,  grid, cnt);
       
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        
        int maxArea = 0 ;
        
        int n = grid.size() , m = grid[0].size();
        
        
        for(int i = 0 ; i < n  ; i++){
            for(int j = 0 ; j <  m ; j++){
                
                if(grid[i][j] == 1){
                    
                    int currArea = 0;
                    dfs(i , j , grid , currArea );
                    maxArea = max(maxArea  , currArea);
                    
                    
                }
                
            }
        }
        return maxArea;
        
    }
};