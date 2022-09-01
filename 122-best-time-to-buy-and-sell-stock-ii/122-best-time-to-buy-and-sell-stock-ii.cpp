class Solution {
public:
    int solve(int i , int buy , int n , vector<int>&prices , vector<vector<int>>&dp){
        
        if(i == n){
            return 0;
        }
        if(dp[i][buy] != -1) return dp[i][buy];
        long long int profit = 0;
        if(buy == 0){// we can buy the stock
            profit = max(0 + solve(i+1 , 0 , n , prices , dp) ,  -prices[i] + solve(i+1 , 1 ,  n , prices , dp));
        }
        else{// we can sell the stock
            profit = max(0 + solve(i+1 , 1 , n ,prices , dp) , +prices[i] + solve(i+1 , 0 , n , prices , dp));
        }
        
        return dp[i][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        // 0 - buy
        // 1 - sell
        int n = prices.size();
        vector<vector<int>>dp(n ,vector<int>(2 , -1));
        return solve(0 , 0 , n , prices , dp);
    }
};