class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int res = nums[0];
        
        int imax = nums[0] , imin = nums[0];
        
        for(int i = 1 ; i < nums.size() ; i++){
            
            // swap max and min
            if(nums[i] < 0){
                swap(imax , imin);
            }
            
            imax = max(nums[i] , imax*nums[i]);
            imin = min(nums[i] , imin*nums[i]);
            res = max(res , imax);
            
            
        }
        return res;
        
    }
};