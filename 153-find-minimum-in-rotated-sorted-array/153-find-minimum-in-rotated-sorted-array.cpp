class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        
        if(nums[0] <= nums[n-1]){
            return nums[0];
        }
        
        int low = 0 , high = n-1;
        while(low <= high){
            
            int mid = low + (high - low)/2;
            int next = (mid + 1)%n;
            int prev = (mid -1 + n)%n;
            
            if(nums[mid] <= nums[prev] && nums[mid] <= nums[next]){
                return nums[mid];
            }
            else if(nums[mid] <= nums[high]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            
            
        }
        return -1;
        
        
    }
};