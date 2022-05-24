class Solution {
public:
    bool f(int ind , vector<int>&nums , vector<vector<int>>&dp, int sum){
        if(sum == 0) return true;
        if(ind == 0) return nums[0] == sum;
        if(dp[ind][sum] != -1) return dp[ind][sum];
        bool nottake = f(ind-1 , nums , dp , sum);
        bool take = false;
        if(sum >= nums[ind])
            take = f(ind-1  , nums , dp , sum-nums[ind]);
        
        return dp[ind][sum] =  take || nottake;
        
    }
    bool canPartition(vector<int>& nums) {
       
        int sum  = 0;
        for(auto x : nums){
            sum += x;
        }
        if(sum&1) return false;
        
        sum /= 2;
        int n = nums.size();
        vector<vector<int>>dp(n , vector<int>(sum+1 , -1));
        return f(n-1 , nums , dp , sum);
    }
};