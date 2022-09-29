class Solution {
public:
    void solve(int idx , vector<int>&nums ,  vector<vector<int>>&ans ,vector<int>&ds){
        ans.push_back(ds);
        
        for(int i = idx ; i < nums.size() ; i++){
            if(i != idx && nums[i] == nums[i-1]){
                continue;
                
               
            }
            ds.push_back(nums[i]);
            solve(i+1 , nums , ans , ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<int>ds;;
        vector<vector<int>>ans;
        solve(0 , nums , ans , ds);
        return ans;
        
        
    }
};