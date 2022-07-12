class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0 , len = 1e9 , j = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            while(sum - nums[j] >= target){
                sum -= nums[j];
                j += 1;
            }
            if(sum >= target){
                len = min(len , i - j+ 1);
            }
        }
        
        if(len == 1e9) return 0;
        return len;
        
    }
};