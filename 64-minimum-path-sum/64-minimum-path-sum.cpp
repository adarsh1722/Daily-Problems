class Solution {
public:
    int f(int i , int j , vector<vector<int>>&grid , vector<vector<int>>&dp){
        if(i == 0 && j == 0) return grid[0][0];
        if(i < 0 || j < 0 ) return INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        int up = f(i-1  , j , grid ,dp);
        int left = f(i , j - 1 , grid , dp);
        return dp[i][j] = grid[i][j] + min(up , left);
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        
        int m = grid.size() , n = grid[0].size();
        vector<int>prev(n , INT_MAX);
        
        for(int i = 0 ;  i < m ; i++){
            vector<int>temp(n , INT_MAX);
            for(int j = 0 ; j < n ; j++){
                if( i == 0 && j == 0){
                    temp[0] =grid[0][0];
                }
                else{
                
                    int up = 1e9 , left = 1e9;
                    if(i > 0) up = prev[j];
                    if(j > 0) left = temp[j-1];
                    temp[j] = grid[i][j] + min(up ,left);
                }
            }
            prev = temp;
        }
        return prev[n-1];
    }
};