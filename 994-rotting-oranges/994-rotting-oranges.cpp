class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        if(grid.size() == 0){
            return 0;
        }
        
        int n = grid.size() , m = grid[0].size() , tot = 0 ,days = 0 ,cnt = 0;
        queue<pair<int , int>>q;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] != 0 ) tot++;
                if(grid[i][j] == 2) q.push({i , j});
            }
        }
        
        int dx[4] = {-1 , 0 , 1, 0};
        int dy[4] = {0 , 1, 0 , -1};
        
        while(!q.empty()){
            
            int sz = q.size();
            cnt += sz;
            while(sz--){
                
                auto node = q.front();
                q.pop();
                int x = node.first;
                int y = node.second;
                
                for(int i = 0 ; i < 4 ; i++){
                    
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    
                    if(nx < 0 || ny < 0 || nx >= n || ny >= m || grid[nx][ny] != 1) continue;
                    
                    
                    grid[nx][ny] = 2;
                    q.push({nx , ny});
                    
                    
                }
                
                
                
            }
            if(!q.empty())days++;
            
            
        }
        
        return tot == cnt ? days : -1;

        
        
    }
};