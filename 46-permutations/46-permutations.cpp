class Solution {
public:
    void solve(vector<int>&nums , vector<int>ds , vector<vector<int>>&ans , vector<int>&hashMap){
        
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return ;
        }
        
        for(int i = 0; i < nums.size() ; i++){
            
            if(hashMap[i] == -1){
                hashMap[i] = 1;
                ds.push_back(nums[i]);
                solve(nums , ds , ans , hashMap);
                ds.pop_back();
                hashMap[i] = -1;
            }
        }
        
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds , hashMap(nums.size() , -1);
        solve(nums ,ds , ans , hashMap);
        return ans;
    }
};