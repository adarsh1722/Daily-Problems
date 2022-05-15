class Solution {
public:
    void recursion(int i ,int n ,  vector<int>&nums , vector<int>&ds ,vector<vector<int>>&res){
        if(i == n){
            res.push_back(ds);
            return;
        }
        // pick
        ds.push_back(nums[i]);
        recursion(i+1 , n ,nums , ds , res);
        ds.pop_back();
        recursion(i+1 , n , nums ,ds , res);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ds;
        vector<vector<int>>res;
        recursion(0 ,n , nums ,ds , res);
        
        int maxValue = 0;
        for(auto x : nums){
            maxValue |= x;
        }
        
        int count = 0 ;
        for(auto x : res){
            vector<int>arr = x;
            int OR = 0;
            for(auto it : arr){
                OR |= it;
            }
            if(OR == maxValue){
                count++;
            }
        }
        return count;
        
        
        
    }
};