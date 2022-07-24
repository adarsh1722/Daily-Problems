class Solution {
public:
    int f(int i , int j , vector<vector<int>>&g , vector<vector<int>>&dp){
        if(i == 0 && j == 0){
            return g[0][0];
        }
        if(i < 0 || j < 0) return 1e9;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int up = g[i][j] + f(i-1 , j , g , dp);
        int left = g[i][j] + f(i , j-1 , g , dp);
        
        return dp[i][j] = min(up , left);        
        
    }
    int minPathSum(vector<vector<int>>& g) {
        int n = g.size() , m = g[0].size();
        
        vector<vector<int>>dp(n , vector<int>(m , 0));
        
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(i == 0 && j == 0){
                    dp[0][0] = g[0][0];
                    continue;
                }
                
                int up = 1e9, left = 1e9;
                if(i > 0){
                    up = g[i][j] + dp[i-1][j];
                }
                if(j > 0){
                    left = g[i][j] + dp[i][j-1];
                }
                dp[i][j] = min(up , left);                
                
                
            }
        }
        
        return dp[n-1][m-1];
       
        
        
        
    }
};