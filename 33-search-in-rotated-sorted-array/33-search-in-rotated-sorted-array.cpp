class Solution {
public:
    int solve(vector<int>&nums , int l , int h , int x){
        
        while(l <= h){
            
            int mid = l + (h - l)/2;
            if(nums[mid] == x){
                return mid;
            }
            else if(nums[mid] < x) l = mid+1;
            else h = mid - 1;
                       
        }
        return -1;
        
        
    }
    int getminimum(vector<int>&nums){
        int n = nums.size();
        int start = 0 , end = n - 1;
        while(start <= end){
            
            int mid = start + (end - start)/2;
            int next = (mid+1)%n;
            int prev = (mid + n - 1)%n;
            
            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev]){
                return mid;
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
    int search(vector<int>& nums, int target) {
        
        int idx = -1 , n = nums.size();
        idx = getminimum(nums);
        
        int left = solve(nums , 0 , idx-1 , target );
        
        int right = solve(nums , idx , n -1 ,target);
        
        if(left != -1) return left;
        if(right != -1) return right;
        return -1;
        
        
    }
};