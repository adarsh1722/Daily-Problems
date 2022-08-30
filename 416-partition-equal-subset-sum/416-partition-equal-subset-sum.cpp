class Solution {
public:
    bool solve(int i , int sum , vector<int>&arr , vector<vector<int>>&dp){
        
        if(sum == 0 ){
            return true;
        }
        
        if(i == 0){
            return sum == arr[0];
        }
        if(dp[i][sum] != -1) return dp[i][sum];
        bool notpick = solve(i-1 , sum , arr , dp);
        bool pick = false;
        if(sum >= arr[i]){
            pick = solve(i-1 , sum - arr[i] , arr , dp);
        }
        
        return dp[i][sum] = pick || notpick;
        
    }
    bool canPartition(vector<int>& nums) {
        
      int sum = 0;
      int n = nums.size();
      for(auto x : nums){
          sum += x;
      }
        
      if(sum%2 == 1){
          return false;
      }
      sum /= 2;
      vector<vector<int>>dp(n , vector<int>(sum +1 , -1));
      return solve(n-1 , sum , nums , dp);
        
    }
};