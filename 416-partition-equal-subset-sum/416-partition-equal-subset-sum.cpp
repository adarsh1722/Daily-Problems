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
        vector<vector<int>>dp(n , vector<int>(target+1 , 0));
        
        for(int i = 0 ; i < n ;i++){
            dp[i][0] = true;
        }
        // int target = sum/2;
        if(nums[0] <= target){
            dp[0][nums[0]] = true;
        }
        
        for(int ind = 1 ; ind < n ; ind++){
            for(int target = 1 ; target <= sum/2 ; target++ ){
                    int notPick = dp[ind-1][target];
                    int pick = false;
                    if(target >=  nums[ind]){
                        pick = dp[ind-1][target - nums[ind]];
                    }

                    dp[ind][target] = pick || notPick;
            }
        }
        return dp[n-1][target];
        
        
        
        
        
    }
};