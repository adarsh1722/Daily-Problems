class Solution {
public:
    int solve(int i , int j , vector<vector<int>>&arr  , int n , vector<vector<int>>&dp) {
        
        if(i == n-1){
            return arr[n-1][j];
        }
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int down = arr[i][j] + solve(i+1 , j , arr , n , dp);
        int diag = arr[i][j] + solve(i+1 , j + 1 , arr , n ,dp);
        
        return dp[i][j] = min(down  , diag);
        
        
    }
    int minimumTotal(vector<vector<int>>& arr) {
        
        
        int n = arr.size();
        vector<vector<int>>dp(n , vector<int>(n , 0));
        
        for(int j = 0 ; j < n ; j++){
            dp[n-1][j] = arr[n - 1][j];
            
        }
        
        for(int i = n-2 ; i >= 0 ; i--){
            
            for(int j = 0 ; j<= i ;j++){
                dp[i][j] = min(arr[i][j] + dp[i+1][j] , arr[i][j] + dp[i+1][j+1]);
            }
            
        }
        return dp[0][0];
        
        
    }
};