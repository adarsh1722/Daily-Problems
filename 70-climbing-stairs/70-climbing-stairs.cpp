class Solution {
public:
    int get(int n , vector<int>&dp){
        
        if(n <= 1) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = get(n-1 , dp) + get(n-2 , dp);
        
        
    }
    int climbStairs(int n) {
        
        if(n <= 1) return 1;
        vector<int>dp(n+1 , 0);
      
        dp[0] = dp[1] = 1;
        
        for(int  i = 2 ; i<= n ; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];        
        
    }
};