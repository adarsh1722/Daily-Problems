class Solution {
public:
    int dx[4]={-1,0,+1,0};
    int dy[4]={0,+1,0,-1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size() , m = mat[0].size();
        vector<vector<int>>res( n , vector<int>(m , 1e9));
        // push all the zeroes
        queue<pair<int , int>>q;
        for(int i = 0 ; i < n ; i++){
            for(int  j = 0 ; j < m ; j++){
                if(mat[i][j] == 0){
                    q.push({i , j});
                    res[i][j] = 0;
                }
            }
        }
        
        
        
        
        while(!q.empty()){
            
            auto [x , y] = q.front();
            q.pop();
            
            for(int i = 0 ; i < 4 ; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx >= 0 && nx < n && ny >= 0 &&  ny < m && mat[nx][ny]== 1){
                    res[nx][ny] = res[x][y] + 1;
                    q.push({nx , ny});
                    mat[nx][ny]= 0;
                    
                }
            }
            
            
        }
        return res;
        
        
    }
};