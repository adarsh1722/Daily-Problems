class Solution {
public:
    
    int solve(int i , int j , vector<vector<int>>&mat , vector<vector<int>>&dp){
        
        if(j < 0 || j >= mat.size()){
            return 1e9;
        }
        
        if(i == 0){
            return mat[i][j];
        }
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int up = solve(i-1 , j , mat , dp);
        int rdiag = solve(i-1 , j+1 , mat , dp);
        int ldiag = solve(i-1 , j-1 , mat , dp);
        return dp[i][j] = mat[i][j] + min({up , rdiag , ldiag});
    
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        
        int ans = 1e9;
        
        
        int n = matrix.size();
        vector<vector<int>>dp(n , vector<int>(n , -1));
        for(int i = 0 ; i < n ; i++){
            
            ans = min(ans , solve(n-1 , i , matrix , dp));
            
        }
        
        return ans;
        
        
        
    }
};