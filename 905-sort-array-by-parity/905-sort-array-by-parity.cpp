class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int p1 = -1  , p2 = 0 , n = nums.size();
        
        while(p2 < n)
        {
            if(nums[p2] & 1){
                p2 += 1;
            }
            else{
                p1 += 1;
                swap(nums[p1] , nums[p2]);
                p2 += 1;
            }
            
        }
        return nums;
        
        
    }
};