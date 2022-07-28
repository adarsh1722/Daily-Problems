class Solution {
public:
    int solve(int ind , int buy  , vector<int>&arr , vector<vector<int>>&dp){
        if(ind == arr.size()){
            return 0;
        }
        
        if(dp[ind][buy] != -1) return dp[ind][buy];
        long profit = 0;
        
        // i can buy a stock
        if(buy == 0){
            
            profit = max(0 + solve(ind+1 , 0 , arr , dp) , -arr[ind] + solve(ind+1 , 1 , arr ,dp));
        }
        else{ // i have to sell it
            profit = max(0 + solve(ind+1 , 1 , arr , dp) , arr[ind] + solve(ind+1 , 0 , arr , dp));
        }
        
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n , vector<int>(2  , -1));
        return solve(0 , 0 , prices , dp);
    }
};