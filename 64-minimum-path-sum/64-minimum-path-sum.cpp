class Solution {
public:
    int f(int i , int j , vector<vector<int>>& g , vector<vector<int>>&dp){
        if(i == 0 && j == 0){
            return g[0][0];
        
        }
        if(i < 0 || j < 0) return 1e9;
        if(dp[i][j] != -1) return dp[i][j];
        int up = g[i][j] +  f(i-1, j , g , dp);
        int left = g[i][j] + f(i , j -1 , g , dp);
        return dp[i][j] = min(up , left);
        
    }
    int minPathSum(vector<vector<int>>& g) {
        
        int m = g.size() , n = g[0].size();
        vector<vector<int>>dp(m , vector(n , -1));
        return f(m-1 , n-1, g , dp);
        
    }
};