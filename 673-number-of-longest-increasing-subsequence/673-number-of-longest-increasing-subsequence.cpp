class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        
        int n = nums.size() , maxx = -1;
        
        vector<int>dp(n , -1);
        vector<int>ct(n ,  1);
        for(int i = 0 ; i < n ; i++){
            
            for(int j = 0 ; j < i ; j++){
                
                if(nums[i] > nums[j] && 1 + dp[j] > dp[i]){
                    
                    dp[i] = 1 + dp[j];
                    ct[i] = ct[j];
                    
                }
                else if(nums[i] > nums[j] && 1 + dp[j] == dp[i]){
                    ct[i] += ct[j];
                }
                
            }
            maxx = max(maxx , dp[i]);
            
        }
        
        int nos = 0 ;
        
        // ct[i]  is wjh se add kiya h kyunki arr[i] pe ct[i] h jo ki largest h to kitne uspe khtm ho rhe h 
        // vo add kr do
        
        for(auto i = 0 ; i  < n ; i++){
            if(dp[i] == maxx){
                nos += ct[i];
            }
        }
        
        return nos;
        
        
        
        
        
    }
};