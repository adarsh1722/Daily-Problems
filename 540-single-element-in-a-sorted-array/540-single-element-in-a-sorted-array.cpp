class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        
        int low = 0 , high = nums.size()-1;
        int mid = 0;
        
        // when there is a single element
        if(high == 0) return nums[0];
        // when first element is the non repeating element
        else if(nums[0] != nums[1]) return nums[0];
        // when last element is the non repeating element
        else if(nums[high] != nums[high-1]) return nums[high];
        
        // other conditions
        while(low <= high){
            
            // calculate mid
            mid = low + (high - low) / 2;
            
            // unique element property
            if(nums[mid] != nums[mid + 1] && nums[mid] != nums[mid-1] )
                return nums[mid];
            
            if((mid %2 == 0 && nums[mid] == nums[mid + 1]) || (mid%2 == 1 && nums[mid] == nums[mid-1]) ) 
                low = mid + 1;
            else
                high = mid - 1;
            
                   
            
            
            
        }
        return -1;
        
        
    }
};