class Solution {
public:
    int solve(int idx , vector<int>& nums , vector<int>&dp){
        
        if(idx  >= nums.size()-1) return 0;
        
        if(dp[idx] != -1) return dp[idx];
        
        int ans = 1e9;
        
        for(int i = 1 ; i <= nums[idx] ; i++){
            int jump = 1 + solve(idx + i , nums , dp);
            ans = min(ans , jump);
        }
        return dp[idx] = ans;
    }
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>dp(n , -1);
        int ans = solve(0 , nums ,dp);
        return ans == 1e9 ? 0 : ans;
        
    }
};