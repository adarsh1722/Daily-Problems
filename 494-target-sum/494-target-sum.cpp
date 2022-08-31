class Solution {
public:
    int solve(int i , int sum , vector<int>&nums , vector<vector<int>>&dp){
        
        if(i == 0){
            if(sum == 0 && nums[0] == 0) return 2;
            if(sum == 0 || nums[0] == sum) return 1;
            return 0;
        }
        if(dp[i][sum] != -1) return dp[i][sum];
        int notpick = solve(i-1 , sum , nums , dp);
        int pick = 0;
        if(sum >= nums[i]){
            pick = solve(i-1 , sum - nums[i] , nums , dp);
        }
        return dp[i][sum] = pick + notpick;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int sum = 0 ;
        
        for(auto x : nums){
            sum += x;
        }
        
        if(sum - target < 0) return 0;
        if((sum-target)%2  == 1 ) return 0;
        int s2 = (sum  - target)/2;
        int n = nums.size();
        vector<vector<int>>dp(n , vector<int>(s2+1 , -1));
        return solve(n-1 , s2 , nums , dp);
        
    }
};