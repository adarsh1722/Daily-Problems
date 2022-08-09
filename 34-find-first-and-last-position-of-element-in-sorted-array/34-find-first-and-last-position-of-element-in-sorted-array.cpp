class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>Ans;
        
        int n = nums.size();
        
        int lo = 0 , hi = n-1  ,ans = -1;
        while(lo <= hi){
            
            int mid = lo + (hi - lo)/2;
            if(nums[mid] == target){
                ans  = mid;
                hi  = mid-1;
            }
            else if(nums[mid]  > target) hi = mid-1;
            else lo = mid+1;
            
        }
        if(ans == -1) return {-1 , -1};
        
        Ans.push_back(ans);
        
        lo = 0 , hi = n-1  ,ans = -1;
        while(lo <= hi){
            
            int mid = lo + (hi - lo)/2;
            if(nums[mid] == target){
                ans  = mid;
                lo = mid+1;
            }
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
            
        }
        Ans.push_back(ans);
        return Ans;
        
    }
};