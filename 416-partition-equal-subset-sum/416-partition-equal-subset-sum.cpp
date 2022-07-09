class Solution {
public:
    bool solve(int ind  , vector<int>&nums , vector<vector<int>>&dp ,  int  target){
        
        if(target == 0) return true;
        if(ind == 0){
            return nums[ind] == target;
        }
        if(dp[ind][target] != -1) return dp[ind][target];
        int notPick = solve(ind-1 , nums , dp , target);
        int pick = false;
        if(target >=  nums[ind]){
            pick = solve(ind - 1 , nums , dp , target - nums[ind]);
        }
        
        return dp[ind][target] = pick || notPick;
        
        
    }
    bool canPartition(vector<int>& nums) {
        
        int sum = 0 ;
        for(auto x : nums){
            sum += x;
        }
        if(sum&1) return false;
        int n = nums.size();
        int target = (sum)/2;
        vector<vector<int>>dp(n , vector<int>(target+1 ,-1));
        return solve(n-1  , nums ,dp , target);
        
        
        
        
    }
};