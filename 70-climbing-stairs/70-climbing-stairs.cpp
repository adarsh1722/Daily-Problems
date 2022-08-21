class Solution {
public:
    int get(int n , vector<int>&dp){
        
        if(n <= 1) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = get(n-1 , dp) + get(n-2 , dp);
        
        
    }
    int climbStairs(int n) {
        
        if(n <= 1) return 1;
        vector<int>dp(n+1 , -1);
        return get(n , dp);
        
        
    }
};