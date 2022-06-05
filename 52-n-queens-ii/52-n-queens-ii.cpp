class Solution {
public:
    bool isSafe(int row , int col , vector<string>board , int n){
        int dup_row = row;
        int dup_col = col;
        // upper diagonal
        
        
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q') return false;
            row-- , col--;
        }
        
        // same row
        row = dup_row , col = dup_col;
        while(col >= 0 ){
            if(board[row][col] == 'Q') return false;
            col--;
        }
        
        // lower diag
        row = dup_row , col = dup_col;
        while(row < n && col >= 0 ){
            if(board[row][col] == 'Q') return false;
            row++ , col--;
        }
        
        return true;
        
        
    }
    int solve(int col , vector<string>&board , int n) {
        if(col == n){
            return 1;
        }
        int count = 0 ;
        for(int row = 0 ; row  < n ; row++){
            if(isSafe(row , col , board , n)){
                board[row][col] = 'Q';
                count += solve(col + 1 , board , n);
                board[row][col] = '.';
            }
        }
        
        return count;
        
        
    }
    int totalNQueens(int n) {
        
      
        vector<string>board(n);
        string s(n , '.');
        for(int i = 0 ; i < n ; i++){
            board[i] = s;
        }
        return solve(0  , board , n);
        

        
        
    }
};