class Solution {
public:
    vector<int>dp;
    int solve(int i  , vector<int>&nums){
        
        if(i < 0) return 0;
        if(i == 0){
            return nums[0];
        }
        if(dp[i] != -1) return dp[i];
        
        int notPick = 0 + solve(i-1 , nums);
        
        int pick = nums[i] + solve(i-2 , nums);
        
        return dp[i] =  max(pick , notPick);
        
        
    }
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        dp.resize(n+1 , -1);
        return solve(n-1 , nums);
        
    }
};