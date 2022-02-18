class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid, int &cnt)
    {
        if(i < 0 || i == grid.size() || j < 0 || j == grid[0].size()  || grid[i][j] == 0)
            return;
        
        grid[i][j] = 0;
        cnt++;
        
        dfs(i-1, j,  grid, cnt);
        dfs(i, j+1, grid, cnt);
        dfs(i+1, j,  grid, cnt);
        dfs(i, j-1,  grid, cnt);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size(), n = grid[0].size();
        // vector<vector<bool>> vis(m, vector<bool>(n, false));
        int ans = 0;
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if( grid[i][j] == 1)
                {
                    int cnt = 0;
                    dfs(i, j, grid, cnt);
                    ans = max(ans, cnt);
                }
            }
        }
        return ans;
        
    }
};