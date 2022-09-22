class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n = nums.size();
        int max1 = 0 , cnt = 0;
        for(auto x : nums){
            if(x == 1){
                max1 = max(max1 , ++cnt);
            }
            else{
                cnt = 0;
            }
        }
        return max1;
        
    }
};