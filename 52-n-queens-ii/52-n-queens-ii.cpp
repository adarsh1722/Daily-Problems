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
    void solve(int col , vector<string>&board , set<vector<string>>&ans , int n) {
        if(col == n){
            ans.insert(board);
            return ;
        }
        for(int row = 0 ; row  < n ; row++){
            if(isSafe(row , col , board , n)){
                board[row][col] = 'Q';
                solve(col + 1 , board , ans , n);
                board[row][col] = '.';
            }
        }
        
        
    }
    int totalNQueens(int n) {
        
        set<vector<string>>ans;
        vector<string>board(n);
        string s(n , '.');
        for(int i = 0 ; i < n ; i++){
            board[i] = s;
        }
        solve(0  , board , ans , n);
        
        return ans.size();
        
        
    }
};