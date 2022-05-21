class Solution {
public:
    int f(int i  , int j , vector<vector<int>>&arr , vector<vector<int>> &dp){
        int n = arr.size();
        if(i == n - 1) return arr[n - 1][j];
        if(dp[i][j] != -1) return dp[i][j];
        int d = arr[i][j]  + f(i+1 , j , arr , dp);
        int dig = arr[i][j] + f(i+1 , j+1 ,arr , dp);
        
        return dp[i][j] = min(d , dig);
        
    }
    int minimumTotal(vector<vector<int>>& arr) {
        
        int n = arr.size();
        vector<vector<int>>dp(n , vector<int>(n ,-1));
        return f(0 , 0 , arr , dp);
    }
};