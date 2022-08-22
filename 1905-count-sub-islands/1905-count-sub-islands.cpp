class Solution {
public:
    bool dfs(int i , int j , vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        // Base Case
        
        if(i <0 || j < 0 || i >= grid1.size() || j >= grid1[0].size() || grid2[i][j] == 0){
            return true;
        }
        
        
        // else part
        
        if(grid1[i][j] != grid2[i][j]){
            return false;
        }
        
        grid2[i][j] = 0;
        
        bool l = dfs(i , j-1 , grid1 ,grid2);
        bool r = dfs(i ,j+1, grid1 ,grid2);
        bool u = dfs(i+1, j, grid1 ,grid2);
        bool d = dfs(i-1 , j, grid1 ,grid2);
        
        return l and r and u and d;
        
        
        
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int ans = 0;
        
        int n = grid2.size() , m = grid2[0].size();
        
        for(int i = 0 ; i < n  ; i++){
            for(int j = 0 ; j < m ; j++){
                
                if(grid2[i][j] == 1){
                    
                    if(dfs(i , j , grid1 ,grid2)){
                        ans += 1;
                    }
                
                }
                
            }
        }
        return ans;
        
        
    }
};