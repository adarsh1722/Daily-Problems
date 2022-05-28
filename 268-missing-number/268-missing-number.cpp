class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        int total_sum = n*(n+1)/2;
        
        int sum_getting = 0;
        for(auto x : nums)
        {
            sum_getting += x;
        }
        
        int missing = total_sum -  sum_getting;
        
        return missing;
        
    }
};