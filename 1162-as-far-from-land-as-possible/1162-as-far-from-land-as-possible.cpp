class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int , int>>q;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1){
                    q.push({i , j});
                }
            }
        }
        
        int dx[] = {-1 , 1 , 0 , 0};
        int dy[] = {0 , 0 , -1 , 1};
        
        int cnt = 0 ;
        while(!q.empty()){
            
            cnt += 1;
            
            
            int n = q.size();
            
            while(n--){
                
                auto [x , y ] = q.front();
                q.pop();
                
                for(int i = 0 ;  i < 4 ; i++){
                    int x1 = x + dx[i];
                    int y1 = y + dy[i];
                    
                    if(x1 >= 0 && x1 < grid.size() && y1 >= 0 && y1 < grid[0].size() && grid[x1][y1] == 0){
                        grid[x1][y1] = 1;
                        q.push({x1 , y1});
                    }
                     
                    
                }
                
                
            }

        }
        
        return cnt > 1 ? cnt-1 : -1;
        
    }
};