class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        if(grid.empty()) return 0;
        
        int n = grid.size()  , m  = grid[0].size() ,days= 0 , tot = 0 , cnt =0;
        queue<pair<int , int>>rotten;
        
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                // counting all the oranges whether it is fresh or not
                if(grid[i][j] != 0) tot++;
                if(grid[i][j] == 2) rotten.push({i , j});
            }
        }
        
        int dx[4] = {-1 , 0 , 1, 0};
        int dy[4] = {0 , 1, 0 , -1};
        while(!rotten.empty()){
            int k = rotten.size();
            cnt += k;
            while(k--){
                
                int x = rotten.front().first , y = rotten.front().second;
                rotten.pop();
                
                for(int i = 0  ; i < 4 ; i++){
                    int nx = x + dx[i] , ny = y + dy[i];
                    if(nx < 0 || ny < 0 || ny >= m || nx >= n || grid[nx][ny] != 1)continue;
                    // if it is fresh then only you will come to this part
                    grid[nx][ny] = 2;
                    rotten.push({nx, ny});
                }
              
            }
            // days will only be incremented only if they are any element in queue
            if(!rotten.empty()) days++;
        }
        
        return tot == cnt ?days : -1;
        
    }
};