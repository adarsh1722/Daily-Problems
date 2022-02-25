class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int count = n/2;
        map<int , int>mp;
        for(auto x : nums){
            mp[x]++;
            if(mp[x] > count){
                count = mp[x];
                return x;
            }
        }
        
        return -1;
        
        
    }
};