class Solution {
public:
    void recur(vector<int>ds , vector<int>&nums , vector<vector<int>>&ans , map<int , int>&mp){
        
        // base case
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        
        // recurring part
        
        for(int i = 0 ; i < nums.size() ; i++){
            
            if(mp[i] == 0){
                mp[i] = 1;
                ds.push_back(nums[i]);
                recur(ds , nums , ans , mp);
                mp[i] = 0;
                ds.pop_back();
            }
            
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        map<int , int>mp;
        recur(ds , nums , ans , mp);
        return ans;
        
        
    }
};