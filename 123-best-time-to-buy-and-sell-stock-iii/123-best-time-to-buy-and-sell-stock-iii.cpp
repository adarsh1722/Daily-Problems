class Solution {
public:
    int solve(int i , int buy  , int cap , int n , vector<int>&prices ,  vector<vector<vector<int>>>&dp){
        
        if(i == n || cap == 0) return 0;
        
        if(dp[i][buy][cap] != -1) return dp[i][buy][cap];
        int profit = 0 ;
        if(buy == 0){
            profit = max( 0  + solve(i+1 , buy  , cap , n , prices  , dp) , -prices[i] + solve(i+1 , buy^1 , cap , n , prices, dp));
        }
        else{
            profit = max(0 + solve(i+1 , buy , cap , n ,prices, dp), +prices[i] + solve(i+1 , buy^1 , cap-1 , n , prices, dp));
        }
        
        return dp[i][buy][cap] = profit;
        
    }
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        vector<vector<vector<int>>>dp(n ,vector<vector<int>>(2 , vector<int>(3 ,-1)));
        return solve(0 , 0  , 2 ,n ,prices , dp);
        
    }
};