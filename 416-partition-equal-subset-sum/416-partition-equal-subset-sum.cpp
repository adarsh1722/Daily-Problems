class Solution {
public:
    int f(int idx , int k , vector<int>&nums , vector<vector<int>>&dp){
        if(k == 0){
            return true;
        }
        if(idx == 0) return nums[0] == k;
        if(dp[idx][k] != -1) return dp[idx][k];
        
        bool nottaken = f(idx-1 , k , nums , dp);
        bool taken = false;
        if(k >= nums[idx])
            taken = f(idx-1 , k - nums[idx], nums , dp);
        
        return dp[idx][k] = taken || nottaken;
    }
    bool canPartition(vector<int>& nums) {
        
        int sum = 0;
        sum = accumulate(nums.begin() , nums.end(), 0);
        if(sum&1) return false;
        sum /= 2;
        int n = nums.size();
        vector<vector<int>>dp(n ,vector<int>(sum+1 , -1));
        return f(n-1 , sum , nums , dp);
        
    }
};