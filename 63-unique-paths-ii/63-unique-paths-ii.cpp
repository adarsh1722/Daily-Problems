class Solution {
public:
    int solve(int i , int j  , vector<vector<int>>& g , vector<vector<int>>&dp){
        
        if(g[i][j] == 1){
            return 0;
        }
        
        // Base Case;
        if(i == 0 && j == 0){
            return 1;
        }
        if(dp[i][j]  != -1) return dp[i][j];
        
        int up = 0  , left = 0;
        
        if(i > 0) up = solve(i-1 , j , g , dp);
        if(j > 0) left = solve(i  , j -1 , g , dp);
        return dp[i][j] =  up + left;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        
        int m = g.size() , n = g[0].size();
        vector<vector<int>>dp(m ,vector<int>(n , -1));
        
        if(g[0][0] == 1 || g[m-1][n-1] == 1){
            return  0;
        }
        
        dp[0][0] = 1;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i == 0 &&  j == 0 ){
                    continue;
                }
                
                 int up = 0  , left = 0;
        
                if(i > 0 && g[i-1][j] != 1) up = dp[i-1][j];
                if(j > 0 && g[i][j-1] != 1) left = dp[i][j-1] ;
                dp[i][j] =  up + left;
                                
            }
        }
        
        return dp[m-1][n-1];
        
        
        
    }
};