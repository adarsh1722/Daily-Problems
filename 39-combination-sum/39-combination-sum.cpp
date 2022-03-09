class Solution {
public:
    void getCombination(int idx ,int target , vector<int>&arr , vector<vector<int>>&ans , vector<int>&ds)
    {
        // base case
        if(idx >= arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        // pick
        if(arr[idx] <= target){
            
            ds.push_back(arr[idx]);
            getCombination(idx , target- arr[idx] , arr , ans , ds);
            ds.pop_back();
            
        }
        // not-pick
        getCombination(idx+1 , target , arr , ans ,ds);
        
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        getCombination(0 , target , arr , ans , ds );
        return ans;
        
    }
};