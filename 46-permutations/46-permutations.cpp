class Solution {
public:
    void recurPermute(vector<int>&nums , vector<int>&ds , vector<int>&freq , vector<vector<int>>&ans)
    {
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1;
                recurPermute(nums , ds , freq , ans );
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds , freq(nums.size() , 0);
        recurPermute(nums , ds , freq , ans);
        return ans;
        
    }
};