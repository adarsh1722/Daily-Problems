class Solution {
public:
    bool canPartition(int n  , vector<int>&arr){
        int totSum = 0 ;
        for(auto x : arr)
            totSum += x;
        
        if(totSum %2 == 1) return false;
         else{
        int k = totSum/2;
        vector<vector<bool>> dp(n,vector<bool>(k+1,false));
    
        for(int i=0; i<n; i++){
            dp[i][0] = true;
        }
        
        if(arr[0]<=k)
            dp[0][arr[0]] = true;
        
        for(int ind = 1; ind<n; ind++){
            for(int target= 1; target<=k; target++){
                
                bool notTaken = dp[ind-1][target];
        
                bool taken = false;
                    if(arr[ind]<=target)
                        taken = dp[ind-1][target-arr[ind]];
            
                dp[ind][target]= notTaken||taken;
            }
        }
        
        return dp[n-1][k];

    } 
    }
    bool canPartition(vector<int>& nums) {
        
       int n = nums.size();
       return canPartition(n , nums);
    }
};