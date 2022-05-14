class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int , int>>q;
        
        //pushing all the 1s
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    q.push({i , j});
                }
            }
        }
        
        // performing multlisource bfs
        
        int count = 0;
        int dx[4] = {-1 , 1, 0 , 0};
        int dy[4] = {0 ,0 , 1 , -1};
        while(!q.empty()){
            count+=1;
            
            int n = q.size();
            
            for(int i  = 0 ; i < n ; i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(x+1<=grid.size()-1 && grid[x+1][y]==0){
                    q.push({x+1,y});
                    grid[x+1][y]=1;
                }
                if(x-1>=0 &&grid[x-1][y]==0){
                    q.push({x-1,y});
                    grid[x-1][y]=1;
                }
                if(y+1<=grid[0].size()-1 && grid[x][y+1]==0){
                     q.push({x,y+1});
                     grid[x][y+1]=1;
                }                   
                if(y-1>=0 &&grid[x][y-1]==0){
                    q.push({x,y-1});
                    grid[x][y-1]=1;
                }
                                

                
                
            }
            
        }
        
        return count > 1 ? count-1 :-1;
        
    }
};