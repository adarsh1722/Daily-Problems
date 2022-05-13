class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        if(grid[0][0] == 1){
            return -1;
        }
        
        int m = grid.size() , n = grid[0].size();
        
        queue<pair<int , int>>q;
        int visited[n][m];
        memset(visited , 0 , sizeof visited);
        
        int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
        int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
        
        q.push({0 , 0});
        // visited[0][0] = 1;
        grid[0][0] = 1;
        while(!q.empty()){
            
            auto [curx  , cury] = q.front();
            q.pop();
            
            if(curx == n-1 && cury == n-1){
                return grid[n-1][n-1];
            }
            
            for(int i = 0 ; i < 8 ; i++){
                int x = curx + dx[i];
                int y = cury + dy[i];
                
                if(x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == 0){
                    grid[x][y] = grid[curx][cury] + 1;
                    q.push({x , y});
                }
            }
            
        }
        
        return -1;
        
        
        
        
    }
};