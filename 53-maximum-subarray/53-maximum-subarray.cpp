class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size() , max_so_far = INT_MIN, max_ending_here = 0;
        for(auto x : nums){
            
            // add x to current sum
            max_ending_here += x;
            // get max sum 
            max_so_far = max(max_so_far , max_ending_here);
            
            // because it is of now use
            if(max_ending_here < 0){
                max_ending_here = 0;
            }
            
        }
        return max_so_far;
        
    }
};