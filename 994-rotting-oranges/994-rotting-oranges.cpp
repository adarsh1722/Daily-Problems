class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        
        int n = grid.size() , m = grid[0].size() , tot = 0  , cnt = 0 , days = 0 ;
        queue<pair<int  , int>>q;
        
        for(int i  = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] != 0) tot++;
                if(grid[i][j] == 2) q.push({i , j});
            }
        }
        
        int dx[4]  = {-1 , 0 , 1 , 0};
        int dy[4]  = {0 , 1 , 0 , -1};
        
        while(!q.empty()){
            
            int k = q.size();
            cnt += k;
            // days += 1;
            while(k--){
                int x = q.front().first , y = q.front().second;
                q.pop();
                
                for(int i = 0 ; i < 4 ; i++){
                    int nx = x + dx[i] , ny = y + dy[i];
                    if(nx < 0 || ny < 0 || ny >= m || nx >= n || grid[nx][ny] != 1)
                        continue;
                    grid[nx][ny] = 2;
                    q.push({nx , ny});
                    
                }            
                
            }
            
            if(!q.empty()) days++;
           
            
        }
        return tot == cnt ? days: -1;
        
    }
};