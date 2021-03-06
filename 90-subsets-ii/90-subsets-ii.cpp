class Solution {
public:
    void f(int i , vector<int>&nums , vector<int>ds , vector<vector<int>>&ans){
        ans.push_back(ds);
        for(int it = i ; it < nums.size() ; it++){
            if(it != i && nums[it] == nums[it-1]){
                continue;
            }
            ds.push_back(nums[it]);
            f(it+1 , nums ,ds , ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin() , nums.end());
        f(0 , nums , ds , ans);
        return ans;
    }
};