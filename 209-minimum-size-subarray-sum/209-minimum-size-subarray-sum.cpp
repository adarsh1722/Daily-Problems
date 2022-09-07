class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int ans = 1e9;
        int j = 0 , sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
           
            while(sum - nums[j] >= target){
                sum -= nums[j++];
            }
            if(sum >= target){
                ans = min(ans , i - j + 1);
            }
                
        }
        if(ans == 1e9) ans = 0;
        return ans;
        
        
    }
};