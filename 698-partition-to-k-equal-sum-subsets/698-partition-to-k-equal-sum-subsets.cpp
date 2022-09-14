class Solution {
public:
    int vis[17];
    int target;
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int sum = 0;
        sum = accumulate(nums.begin() , nums.end() , sum);
        if(k > nums.size() || sum%k || nums[nums.size()-1] > sum/k) return false;
        target = sum/k;
        return backtrack(nums , 0 , 0 ,k);
        
    }
    bool backtrack(vector<int>&nums , int curr_sum ,int i , int k){
        if(k == 1 && curr_sum == target) return true;
        if(curr_sum == target){
            return backtrack(nums ,0 ,0 , k-1);
        }
        if(i >= nums.size()) return false;
        bool ans = 0;
        if(!vis[i]) {
            vis[i] = 1;
            if(curr_sum + nums[i] <= target) 
                ans |= backtrack(nums, curr_sum + nums[i], i + 1, k);
            vis[i] = 0;
        }
        return ans || backtrack(nums, curr_sum, i + 1, k);
    }
};