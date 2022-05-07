class Solution {
public:
    int minimumCoins(int ind , vector<int>&coins , vector<vector<int>>&dp , int target){
        
        if(ind == 0){
            if(target%coins[0] == 0){
                return target/coins[0];
            }
            else {
                return 1e9;
            }
            
            
        }
        if(dp[ind][target] != -1) return  dp[ind][target];
        int notTake = 0 + minimumCoins(ind-1 , coins , dp , target);
        int take = INT_MAX;
        if(coins[ind] <= target){
            take =  1 + minimumCoins(ind , coins , dp , target - coins[ind]);
        }
        
        return dp[ind][target] = min(take ,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        vector<vector<int>>dp(n , vector<int>(amount+1  , -1));
        int ans = minimumCoins(n-1 , coins , dp , amount);
        if(ans >= 1e9) return -1;
        return ans;
        
    }
};