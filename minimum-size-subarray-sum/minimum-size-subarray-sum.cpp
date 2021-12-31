class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        // Approach : using window based  two pointer
        // space    : O(1)
        // time     : O(n)
        
        int n = nums.size();
        
        int low = 0 , sum = 0 , len = INT_MAX ;
        
        for(int high = 0  ; high < n ; high += 1)
        {
            sum =  sum + nums[high];
            while(sum >= target)
            {
                len = min(len , high - low + 1);
                sum -= nums[low++];
            }
           
        }
        
        if(len == INT_MAX) len = 0;
        return len;
    }
};