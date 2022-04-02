class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size() , lo  , hi , mid , ans=0;
        lo = 0 , hi = n-1;
        while(lo < hi){
            
            int mid = (lo) + (hi - lo)/2;
            if(nums[mid] >= target){
                ans = mid;
                hi = mid;
            }
            else{
                lo = mid+1;
            }
            
            
        }
        
        // if it is in range of array
        if(nums[lo] >= target) return lo;
        return lo+1;
        
        
        
        
        
    }
};