class Solution {
public:
    int countways(int n , vector<int>&dp){
        if(n <= 1){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = countways(n-1 ,dp) + countways(n-2 , dp);
        
    }
    int climbStairs(int n) {
        
        vector<int>dp(n+1 , -1);
        return countways(n , dp);
        
    }
};