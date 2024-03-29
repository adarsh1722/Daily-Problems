class Solution {
public:
    
    int solve(int i  , vector<int>&nums , vector<int>&dp){
        
        if(i < 0)return 0;
        if(i == 0)  return nums[0];
        if(dp[i] != -1) return dp[i];
        
        int notpick = solve(i-1 , nums , dp);
        
        int pick = nums[i] + solve(i-2 , nums , dp);
        
        return dp[i] =  max(pick ,notpick);
        
        
        
    }
    int Rob(vector<int>&nums){
        
        int n = nums.size();
        vector<int>dp(n , 0 );
        dp[0] = nums[0];
        
        for(int i = 1 ; i< n ; i++){
            
            int notpick = dp[i-1];
        
            int pick = nums[i];
            if(i-2 >= 0){
                pick += dp[i-2];
            }

            dp[i] =  max(pick ,notpick);
            
        }
        
        return dp[n-1];
        
        
    }
    
    

    int rob(vector<int>& nums) {
        
        vector<int>nums1 , nums2;
        int  n = nums.size();
        if(n == 1) return nums[0];
        for(int i = 0 ; i < n ; i++){
            if(i != 0) nums1.push_back(nums[i]);
            if(i != n-1) nums2.push_back(nums[i]);
        }
        
        return max(Rob(nums1) , Rob(nums2));
        
    }
};