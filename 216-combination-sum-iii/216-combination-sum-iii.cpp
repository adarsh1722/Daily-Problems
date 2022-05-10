class Solution {
public:
    void get(int start , int end , int k , int n , vector<vector<int>>&ans , vector<int>&ds){
        if(n==0 && k == 0 ){
            ans.push_back(ds);
            return;
        }
        
        if(start > end){
            return;
        }
        
        
        // 1. pick
        ds.push_back(start);
        get(start+1 , end , k-1 , n-start ,ans , ds);
        ds.pop_back();
        get(start+1 , end , k , n , ans , ds);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        get(1, 9 , k , n , ans , ds);
        return ans;
    }
};