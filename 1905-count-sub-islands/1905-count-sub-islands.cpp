class Solution {
public:
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2 , int i , int j){
        if(i < 0 || j < 0 || i >= grid1.size() || j >= grid1[0].size() || grid2[i][j] == 0){
            return true;
        }
        if(grid1[i][j] != grid2[i][j]){
            return false;
        }
        grid2[i][j] = 0;
        int d = dfs(grid1 , grid2 , i+1 , j);
        int u = dfs(grid1 , grid2 , i-1 , j);
        int l = dfs(grid1 , grid2 , i , j+1);
        int r = dfs(grid1 , grid2 , i , j-1);
        return d&&l&&u&&r;
        
        
        
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int n = grid1.size() , m = grid1[0].size();
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid2[i][j] == 1){
                    if(dfs(grid1 , grid2 , i , j)){
                      ans++;
                    }
                }
            }
        }
        return ans;
        
    }
};