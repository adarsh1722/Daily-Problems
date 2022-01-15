class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n =  nums.size();
        unordered_map<int, int>mp;
        for(auto x : nums)mp[x]++;
        vector<int>res;
        for(auto x : mp)if(x.second > n/3)res.push_back(x.first);
        return res;
        
    }
};