class Solution {
public:
    vector<vector<int>>nbrs = {{0 , 1 } , {1 ,0} , {-1 , 0} , {0 , -1}};
    void dfs(vector<vector<char>>&board , int i , int j , vector<vector<bool>>&visited){
        visited[i][j] = true;
        
        //visit neighbours
        
        for(auto &nbr : nbrs){
            
            int x = i + nbr[0];
            int y = j + nbr[1];
            
            if(x < 0 || y < 0 || x > board.size()-1 || y > board[0].size() - 1 || board[x][y] == 'X' || visited[x][y]){
                continue;
            }
            
            dfs(board , x , y , visited);
            
        }
        
    }
    void solve(vector<vector<char>>& board) {
        
        int m = board.size() , n = board[0].size() , i , j ;
        vector<vector<bool>>visited(m , vector<bool>(n , false));
        
        // top and bottom boundaries
        
        for(int i = 0 ; i < n ; i++){
            
            if(!visited[0][i] && board[0][i] == 'O'){
                dfs(board , 0 , i , visited);
            }
            if(!visited[m-1][i] && board[m-1][i] == 'O'){
                dfs(board , m-1 , i , visited);
            }
            
            
        }
        
        // first and last boundaries
        
         for(int i = 0 ; i < m ; i++){
            
            if(!visited[i][0] && board[i][0] == 'O'){
                dfs(board , i , 0 , visited);
            }
            if(!visited[i][n-1] && board[i][n-1] == 'O'){
                dfs(board , i , n-1 , visited);
            }
            
            
        }
        
        // just revert the 'O' which are not on 
        for(int i = 0 ; i < m ; i++){
            
            for(int j = 0 ; j < n ; j++){
                
                if(board[i][j] == 'O' && !visited[i][j]){
                    board[i][j] = 'X';
                }
            }
            
        }
        
       
        
        
    }
};