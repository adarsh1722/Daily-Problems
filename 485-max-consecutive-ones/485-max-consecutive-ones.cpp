class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ones = 0 , max_ones = 0;
        for(auto x : nums){
            
            if(x == 1)
                max_ones = max(++ones , max_ones);
            else 
                ones = 0;
            
        }
        return max_ones;
        
        
    }
};