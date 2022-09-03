class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0 , cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(i == 0 || nums[i-1] < nums[i]) ans = max(ans ,++cnt);
            else cnt = 1;
        }
        return ans;
        
        
    }
};