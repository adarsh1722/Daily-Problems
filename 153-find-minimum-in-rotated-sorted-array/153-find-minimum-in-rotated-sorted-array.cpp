class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1){
            return nums[0]; 
        }
        if(nums[0] < nums[n-1]){
            return nums[0];
        }
        
        int start = 0  , end = n-1;
        while(start <= end){
            int mid  = start + (end - start)/2;
            int next = (mid + 1)%n;
            int prev = (mid + n - 1)%n;
            
            // cout  << nums[prev] << " " << nums[mid] << " " << nums[next]  << endl;
             if(nums[mid] <= nums[next] && nums[mid] <= nums[prev]){
                
                return nums[mid];
            }
            else if(nums[mid] <= nums[end]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            
            
        }
        return -1;
        
    }
};