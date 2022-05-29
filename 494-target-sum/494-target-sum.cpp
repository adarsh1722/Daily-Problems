class Solution {
public:
    int f(int i , int curr_sum , vector<int>&nums , int target){
        // base case
        if(i == 0){
            int x = curr_sum + nums[0];
            int y = curr_sum - nums[0];
            
            if(x == target && y  == target) return 2;
            else if(x == target || y == target) return 1;
            else return 0;
        }
        
        // try out all possible ways
        int plus = f(i-1 , curr_sum + nums[i] ,nums , target);
        int minus = f(i-1 , curr_sum - nums[i] ,nums , target);
        
        // return ways
        return plus + minus;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return f(n-1 , 0 , nums , target);
        
    }
};