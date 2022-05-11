class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        unordered_map<int , int>mp;
        int ans = 0;
        for(auto x : nums){
            int y = k - x;
            if(mp[y] > 0){
                ans += 1;
                mp[y]-=1;
                continue;
            }
            mp[x]+=1;
            
        }
        return ans;
    }
};